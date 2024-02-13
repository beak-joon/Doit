
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> edge;
vector<vector<edge>> graph;
vector<bool> visited;
vector<int> min_dis;
priority_queue<edge, vector<edge>, greater<edge>> pq;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int V,E; cin >> V >> E;
    int K; cin >> K;

    // min_dis.resize(V+1);
    // fill(min_dis.begin(), min_dis.end(), INF_MAX);
    visited = vector<bool>(V+1, false);
    min_dis = vector<int>(V+1, INT_MAX);
    graph.resize(V+1);

    for(int i=0; i<E; i++){
        int u,v,w; cin >> u >> v >> w;
        graph[u].push_back({v,w});
    }

    pq.push({0,K});
    min_dis[K] = 0;

    while(!pq.empty()){
        edge cur = pq.top();
        pq.pop();
        int cv = cur.second;
        if(visited[cv]) continue;
        visited[cv] = true;

        for(edge i : graph[cv]){
            if(min_dis[cv]+i.second < min_dis[i.first]){
                min_dis[i.first] = min_dis[cv]+i.second;
                pq.push({min_dis[i.first],i.first});
            }    
        }
    }
    for(int i=1; i<=V; i++){
        if(visited[i]) cout << min_dis[i] << "\n";
        else cout << "INF" << "\n";
    }
    return 0;
}
