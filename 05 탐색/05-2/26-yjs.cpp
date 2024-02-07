//1260 DFS와 BFS
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> g[1001];
bool visited[1001];

void DFS(int v){
    if(visited[v]){return;}
    visited[v] = 1;
    cout << v << ' ';
    for(int i : g[v]){
        if(!visited[i]){DFS(i);}
    }
}

void BFS(int v){
    queue<int> q;
    q.push(v);

    while(!q.empty()){
        int cur = q.front();
        cout << cur << ' ';
        visited[cur] = 1;
        q.pop();
        for(int i : g[cur]){
            if(!visited[i]){visited[i] = 1; q.push(i);}
        }
    }
}

void Main(){
    int N, M, V;
    cin >> N >> M >> V;
    for(int i=0; i<M; i++){
        int s, e;
        cin >> s >> e;
        g[s].push_back(e);
        g[e].push_back(s);
    }
    for(int i=1; i<N+1; i++){sort(g[i].begin(), g[i].end());}
    DFS(V);
    memset(visited, 0, N+1);
    cout << endl;
    BFS(V);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}
