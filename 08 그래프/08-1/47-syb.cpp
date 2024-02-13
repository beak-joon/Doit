#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
vector<bool> pos;
queue<int> que;

void BFS(int n)
{
    pos[n] = true;
    que.push(n);

    while(!que.empty()){
        int n = que.front();
        que.pop();
        for(int i:graph[n]){
            if(!pos[i]){
                pos[i] = true;
                visited[i]++;
                que.push(i);
            }
        }
    }  
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,M; cin >> N >> M;
    visited = vector<int>(N+1,0);
    pos = vector<bool>(N+1,0);
    graph.resize(N+1);

    for(int i=0; i<M; i++){
        int u,v; cin >> u >> v;
        graph[u].push_back(v);
    }
    for(int i=1; i<=N; i++){
        fill(pos.begin(),pos.end(),false);
        BFS(i);
    }
    int maxv = *max_element(visited.begin(), visited.end());
    for(int i=0; i<=N; i++){
        if(maxv <= visited[i]) cout << i << ' ';
    }
    return 0;
}
