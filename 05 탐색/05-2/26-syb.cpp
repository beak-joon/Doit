#include <bits/stdc++.h>

using namespace std;

vector<bool> dfs_visited;
vector<bool> bfs_visited;
vector<vector<int>> graph;
queue<int> bfs_queue;

void DFS(int n){
    if(dfs_visited[n] == true) return;
    dfs_visited[n] = true;
    cout << n << ' ';
    for(int i:graph[n]){
        if(!dfs_visited[i]) DFS(i);
    }
}
void BFS(int n){
    bfs_queue.push(n);
    bfs_visited[n] = true;

    while(!bfs_queue.empty()){
        int Node = bfs_queue.front();
        bfs_queue.pop();
        cout << Node << ' ';

        for(int i:graph[Node]){
            if(!bfs_visited[i]) { 
                bfs_queue.push(i);
                bfs_visited[i] = true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,s;
    cin >> n >> m >> s;
    dfs_visited = vector<bool>(n+1,false);
    bfs_visited = vector<bool>(n+1,false);
    graph.resize(n+1);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1; i<n+1; i++){
        sort(graph[i].begin(),graph[i].end());
    }
    DFS(s); 
    cout << '\n';
    BFS(s);
    return 0;
}
