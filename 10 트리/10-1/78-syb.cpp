#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<vector<int>> D(15,vector<int>(15,0));

    for(int i=1; i<15; i++){
        D[0][i] = i;
        D[i][1] = 1;
        D[i][2] = i+2;
    }
    for(int i=1; i<15; i++){
        for(int j=3; j<15; j++){
            D[i][j] = D[i-1][j] + D[i][j-1];
        }
    }
    int T; cin >> T;
    for(int i=0; i<T; i++){
        int c,h; cin >> c >> h;
        cout << D[c][h] << '\n';
    }

    return 0;
}
