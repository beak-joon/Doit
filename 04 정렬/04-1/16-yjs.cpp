//1377 버블 소트
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){cin >> v[i].first; v[i].second = i;}

    sort(v.begin(), v.end());
    int Max = 0;

    for(int i=0; i<n; i++){
        if(Max < v[i].second - i){Max = v[i].second - i;}
    }
    cout << Max + 1 << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}