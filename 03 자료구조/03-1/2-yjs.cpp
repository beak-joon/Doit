//1546 평균 구하기
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define PRECISION 3

void Main(){
    int n;
    double ans, max=-1, x;
    cin >> n;
    vector<double> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
        if(max < x){max = x;}
    }
    for(int i = 0; i < n; i++){ans += (v[i] / max) * 100;}

    cout << ans/n << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.setf(ios::fixed);
    cout.precision(PRECISION);
    Main();
    return 0;
}