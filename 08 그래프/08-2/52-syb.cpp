#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> party;
vector<int> parent;

int find(int n){
    if(n == parent[n]) return n;
    return parent[n] = find(parent[n]);
}

void unionfuc(int n1, int n2){
    n1 = find(n1);
    n2 = find(n2);

    if(n1 != n2) parent[n2] = n1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,M; cin >> N >> M;
    int K; cin >> K;
    vector<int> truth(K);
    party.resize(M);
    parent.resize(N+1);

    for(int i=0; i<K; i++) cin >> truth[i];
    for(int i=0; i<M; i++){
        int n; cin >> n;
        for(int j=0; j<n; j++){
            int p; cin >> p;
            party[i].push_back(p);
        } 
    }
    for(int i=0; i<=N; i++) parent[i] = i;

    for(int i=0; i<M; i++){
        int first = party[i][0];
        for(int j=0; j<party[i].size(); j++){
            unionfuc(first, party[i][j]);
        }
    }
    int result = 0;
    for(int i=0; i<M; i++){
        bool count = false;
        int cur = party[i][0];
        for(int j=0; j<truth.size(); j++){
            if(find(cur) == find(truth[j])) count = true;
            if(count) break;
        }
        if(!count) result++;
    }
    cout << result;
    return 0;
}
