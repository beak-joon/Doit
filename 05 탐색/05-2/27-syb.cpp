#include <bits/stdc++.h>

using namespace std;
queue<pair<int,int>> bfs_queue;
vector<vector<bool>> visited;
vector<vector<int>> graph;
static int dx[] = {0,1,0,-1};
static int dy[] = {1,0,-1,0};
int N,M;

void BFS(int i, int j){
    bfs_queue.push({i,j});
    visited[i][j] = true;
    while(!bfs_queue.empty()){
        pair<int,int> p = bfs_queue.front();
        bfs_queue.pop();
        for(int i=0; i<4; i++){
            int x = p.first + dx[i];
            int y = p.second + dy[i];
            if(x > 0 && x <= N && y > 0 && y <= M && graph[x][y] > 0){
                if(!visited[x][y]){
                    visited[x][y] = true;
                    graph[x][y] = graph[p.first][p.second] + 1;
                    bfs_queue.push({x,y});
                }
            }
        }
    }
}  

int main()
{
    cin >> N >> M;
    graph.resize(N+1);
    visited.resize(N+1, vector<bool>(M+1,false));
    //인접행렬
    for(int i=1; i<=N; i++){
        graph[i].push_back(0);
        for(int j=1; j<=M; j++){
            int num; scanf("%1d", &num);
            graph[i].push_back(num);
        }
    }

    BFS(1,1);
    cout << graph[N][M];
    return 0;
}
