#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> graph;
vector<int> vist;

void DFS(int v){
    if(vist[v]) return;
    vist[v] = 1;
    for(int i:graph[v]){
        if(vist[i]==0) DFS(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,c=0;
    cin >> n >> m;
    graph.resize(n+1);
    vist = vector<int>(n+1,0);
    for(int i=1; i<=m; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!vist[i]){
            c ++;
            DFS(i);
        }
    }
    cout << c;
    return 0;
}
