#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> bg;
int group = 1;
bool isbg;

void DFS(int n){
    visited[n] = true;

    for(int i:graph[n]){
        if(visited[i]){
            if(bg[n] == bg[i]){
                isbg = false;
                return;
            }
        }
        else{
            bg[i] = 1 - bg[n];
            DFS(i);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int K,V,E;
    cin >> K;
    for(int i=0; i<K; i++){
        cin >> V >> E;
        visited = vector<bool>(V+1,false);
        bg = vector<int>(V+1,-1);
        graph.clear();
        graph.resize(V+1);
        for(int j=0; j<E; j++){
            int u,v; cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        isbg = true;
        for(int k=1; k<=V; k++){
            DFS(k);
            if(!isbg) break;
        }
        if(isbg) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
