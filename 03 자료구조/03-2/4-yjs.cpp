//11660 구간 합 구하기 5
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[1050][1050]; // 입력 배열
int dp[1050][1050]; // 구간 합 배열

void Main(){
    int n, m, cur;
    int X1, X2, Y1, Y2;
    cin >> n >> m;
    for(int i = 1; i < n+1; i++){
        // 입력
        for(int j = 1; j < n+1; j++){
            cin >> arr[i][j];
            // DP
            dp[i][j] = dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1] + arr[i][j];
        }
    }


    // 구간 합 계산
    for(int i = 0; i < m; i++){
        cin >> X1 >> Y1 >> X2 >> Y2;
        cout << dp[X2][Y2] - dp[X1-1][Y2] - dp[X2][Y1-1] + dp[X1-1][Y1-1] << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}