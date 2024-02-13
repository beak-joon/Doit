#include <bits/stdc++.h>

static bool visited[201][201];
static bool answer[201];
static int abc[3];

static int Sender[] = {0,0,1,1,2,2};
static int Receiver[] = {1,2,0,2,0,1};
using namespace std;

void BFS()
{   
    std::queue<std::pair<int,int>> bfsque;
    bfsque.push({0,0});
    visited[0][0] = true;
    answer[abc[2]] = true;

    while(!bfsque.empty())
    {
        std::pair<int,int> p =  bfsque.front();
        bfsque.pop();

        int a = p.first;
        int b = p.second;
        int c = abc[2] - a - b;

        for(int i=0; i<6; i++)
        {
            int next[] = {a,b,c};
            next[Receiver[i]] += next[Sender[i]];
            next[Sender[i]] = 0;

            if(next[Receiver[i]] > abc[Receiver[i]]){
                next[Sender[i]] = next[Receiver[i]] - abc[Receiver[i]];
                next[Receiver[i]] = abc[Receiver[i]];
            }

            if(!visited[next[0]][next[1]]){
                visited[next[0]][next[1]] = true;
                bfsque.push({next[0],next[1]});
                if(next[0] == 0) answer[next[2]] = true;
            }
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> abc[0] >> abc[1] >> abc[2];
    BFS();
    for(int i=0; i<201; i++){
        if(answer[i]) cout << i << ' ';
    }
    return 0;
}
