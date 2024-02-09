
#include <bits/stdc++.h>

using namespace std;
vector<int> dis;
queue<int> bfs_queue;
vector<vector<pair<int,int>>> tree;

void BFS(int s)
{
    bfs_queue.push(s);

    while(!bfs_queue.empty()){
        int n = bfs_queue.front();
        bfs_queue.pop();
        for(int i=0; i<tree[n].size(); i++){
            if(tree[n][i].first != s && dis[tree[n][i].first] == 0) {
                bfs_queue.push(tree[n][i].first);
                dis[tree[n][i].first] = dis[n] + tree[n][i].second;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int V; cin >> V;
    dis = vector<int>(V+1,0);
    tree.resize(V+1);

    for(int i=0; i<V; i++){
        int N; cin >> N; 
        int u,d; cin >> u >> d;
        while(u != -1){
            tree[N].push_back({u,d});
            cin >> u;
            if(u == -1) break;
            cin >> d;
        }
    }
    BFS(2);
    int max_idx = max_element(dis.begin(),dis.end())-dis.begin(); 
    dis = vector<int>(V+1,0);

    BFS(max_idx);
    cout << *max_element(dis.begin(),dis.end());
    return 0;
}
