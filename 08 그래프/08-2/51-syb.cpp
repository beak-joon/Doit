#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> parent;
vector<int> route;

int find(int n){
    if(parent[n] == n) return n;
    return parent[n] = find(parent[n]);
}

void unionfuc(int i, int j){
    int r1 = find(i);
    int r2 = find(j);

    if(r1 < r2) parent[r2] = r1;
    else parent[r1] = r2;
}

bool checkSame(int n1,int n2){
    int r1 = find(n1);
    int r2 = find(n2);

    if(r1 == r2) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N;
    int M; cin >> M;
    graph.resize(N, vector<int>(N));
    parent = vector<int>(N);
    route = vector<int>(M);

    for(int i=0; i<N; i++){
        parent[i] = i; //대표노드 초기화
        for(int j=0; j<N; j++){
            cin >> graph[i][j]; //인접 행렬
        }
    }
    for(int i=0; i<M; i++) cin >> route[i]; //경로

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(graph[i][j] == 1){
                unionfuc(i,j);
            }
        }
    }
    int path = find(route[0]-1);
    int result = 0;
    for(int i=1; i<M; i++){
        int plan = find(route[i]-1);
        if(path != plan){
            result++; break;
        }
    }
    if(!result) cout << "YES";
    else cout << "NO";
    return 0;
}
