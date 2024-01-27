//1940 주몽
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++){cin >> v[i];}
    sort(v.begin(), v.end());

    int f = 0, l = n-1;
    int ans = 0;

    while(f < l){
        if(v[f] + v[l] == m){ans++; f++; l--;}
        else if(v[f] + v[l] < m){f++;}
        else if(v[f] + v[l] > m){l--;}
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}