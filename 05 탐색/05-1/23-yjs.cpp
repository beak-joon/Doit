//11724 연결요소의 개수
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define PRECISION 0

vector<int> g[1001];
bool seen[1001];
int res=0;

void dfs(int n){
    seen[n]=true;
    for(int i=0; i<g[n].size(); i++){
        int next=g[n][i];
        if(!seen[next]){dfs(next);}
    }
}

void Main(){
    int n, m, u, v;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!seen[i]){dfs(i); res++;}
    }
    cout << res << endl;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.setf(ios::fixed);
    cout.precision(PRECISION);
    Main();
    return 0;
}
