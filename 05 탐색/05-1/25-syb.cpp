#include <bits/stdc++.h>

using namespace std;

vector<bool> visited;
vector<vector<int>> graph;
int result = 0;

void DFS(int n, int c)
{
    if(c==5 || result){
        result = 1;
        return;
    }
    visited[n] = true;
    for(int i:graph[n]){
        if(!visited[i]) {
            DFS(i,c+1);
        }
    }
    visited[n] = false;
}
int main()
{
    int N,M;
    cin >> N >> M;
    visited = vector<bool>(N+1,false);
    graph.resize(N+1);
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=0; i<N; i++){
        if(!visited[i]) DFS(i,1);
        if(result) break;
    }
    if(result) cout << '1';
    else cout << '0';
    return 0;
}
