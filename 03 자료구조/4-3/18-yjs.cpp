//11399 ATM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[1001];

void Main(){
    int n;
    int ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){cin >> arr[i];}
    sort(arr, arr+n);
    for(int i=1; i<n; i++){arr[i] = arr[i] + arr[i-1];}
    for(int i=0; i<n; i++){ans += arr[i];}
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}