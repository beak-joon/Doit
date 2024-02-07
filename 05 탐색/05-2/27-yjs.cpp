//2178 미로
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int g[105][105];
bool visited[105][105];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1 , 0};
int N, M;

void BFS(int x, int y){
    queue<pair<int, int>> q;
    q.push({x,y});

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();
        visited[curX][curY] = 1;
        for(int i=0; i<4; i++){
            int nx = curX + dx[i];
            int ny = curY + dy[i];
            if(nx>=1 && nx<=N && ny >= 1 && ny <= M && !visited[nx][ny] && g[nx][ny] != 0){
                visited[nx][ny] = 1;
                g[nx][ny] = g[curX][curY] + 1;
                q.push({nx, ny});
            }
        }
    }
}

void Main(){
    string s;
    cin >> N >> M;
    for(int i=1; i<N+1; i++){
        cin >> s;
        for(int j=1; j<M+1; j++){g[i][j]=s[j-1]-'0';}
    }
    BFS(1,1);
    cout << g[N][M] << endl;
    // for(int i=1; i<N+1; i++){
    //     for(int j=1; j<M+1; j++){
    //         cout << g[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}