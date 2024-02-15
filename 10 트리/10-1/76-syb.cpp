#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,K; cin >> N >> K;
    //이항계수 배열 N+1*N+1
    vector<vector<int>> vec(N+1,vector<int>(N+1,0));

    for(int i=0; i<=N; i++){
        vec[i][0] = 1;
        vec[i][1] = i;
        vec[i][i] = 1;
    }
    //D[i][j] = D[i-1][j] + D[i-1][j-1]
    for(int i=3; i<=N; i++){
        for(int j=2; j<=i; j++){
            vec[i][j] = vec[i-1][j] + vec[i-1][j-1];
            vec[i][j] = vec[i][j] % 10007;
        }
    }
    cout << vec[N][K];
    return 0;
}
