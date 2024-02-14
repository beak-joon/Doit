#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> tree;
vector<int> result;
vector<bool> visited;

void DFS(int n)
{
    visited[n] = true;

    for(int i:tree[n]){
        if(!visited[i]){
            result[i] = n;
            DFS(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N;
    tree.resize(N+1);
    result = vector<int>(N+1);
    visited = vector<bool>(N+1,false);

    for(int i=1; i<N; i++){
        int a,b; cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    DFS(1);

    for(int i=2; i<=N; i++) cout << result[i] << '\n';
    return 0;
}
