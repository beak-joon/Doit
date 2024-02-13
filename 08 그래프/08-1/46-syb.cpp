
#include <bits/stdc++.h>

using namespace std;

vector<int> visited;
vector<vector<int>> adj_list;
queue<int> bfs_queue;

void BFS(int n)
{
    bfs_queue.push(n);
    visited[n] += 1;

    while(!bfs_queue.empty()){
        int n = bfs_queue.front();
        bfs_queue.pop();

        for(int i:adj_list[n]){
            if(!visited[i]){
                bfs_queue.push(i);
                visited[i] = visited[n] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,M,K,X, result = 0;
    cin >> N >> M >> K >> X;
    visited = vector<int>(N+1,0);
    adj_list.resize(N+1);

    for(int i=0; i<M; i++){
        int u,v; cin >> u >> v;
        adj_list[u].push_back(v);
    }
    BFS(X);
    for(int i=1; i<=N; i++){
        if(visited[i]-1 == K){
            cout << i << '\n';
            result ++;
        }
    }
    if(result==0) cout << -1;
    return 0;
}
