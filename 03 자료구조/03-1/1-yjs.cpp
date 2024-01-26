//11720 숫자의 합 구하기
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n, ans=0;
    string s;

    cin >> n >> s;
    for(int i = 0; i < n; i++){ans+=s[i]-'0';}

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}