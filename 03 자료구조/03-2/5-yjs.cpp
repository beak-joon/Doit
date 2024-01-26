//10986 나머지 합
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

void Main(){
    int n, m, x;
    ll ans = 0;
    cin >> n >> m;
    vector<ll> v(n+1, 0);
    vector<ll> v1(m, 0);
    for(int i = 1; i < n+1; i++){
        cin >> x;
        v[i] = v[i-1] + x;
        v[i] %= m;
        if(v[i] == 0){ans++;}
        v1[v[i]]++;
    }
    // Combination(n, 2) 계산
    for(int i = 0; i < m; i++){ans += v1[i] * (v1[i] - 1) / 2;}
    
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}