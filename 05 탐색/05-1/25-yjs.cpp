//2023 신기한 소수
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> g[2005];
bool visited[2005];
int N, M;
bool flag = false;

void DFS(int n, int depth){
    if(flag){return;}
    if(depth >= 5){
        flag = true;
        cout << 1 << endl;
        return; 
    }
    if(visited[n]){return;}
    visited[n] = true;
    for(int i : g[n]){
        if(!visited[i]){DFS(i, depth+1);}
    }
    visited[n] = false;
}

void Main(){
    cin >> N >> M;
    for(int i=0; i<M; i++){
        int s, e;
        cin >> s >> e;
        g[s].push_back(e);
        g[e].push_back(s);
    }
    for(int i=0; i<N; i++){DFS(i, 1);}
    if(!flag){cout << 0 << endl;}

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}