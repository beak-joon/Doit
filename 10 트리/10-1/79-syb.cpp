#include <bits/stdc++.h>

using namespace std;
int main()
{   
    vector<vector<int>> D(31,vector<int>(30,0));
    for(int i=1; i<30; i++){
        D[i][0] = 1;
        D[i][1] = i;
        D[i][i] = 1;
    }
    for(int i=3; i<30; i++){
        for(int j=2; j<=i; j++){
            D[i][j] = D[i-1][j] + D[i-1][j-1];
        }
    }
    int T; cin >> T;
    for(int i=0; i<T; i++){
        int m,n; cin >> m >> n;
        cout << D[n][m] << '\n';
    }
    return 0;
}
