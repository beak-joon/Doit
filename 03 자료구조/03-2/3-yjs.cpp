//11659 구간 합 구하기 4
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n, m, x;
    int f, l;
    cin >> n >> m;
    vector<int> v(n+1, 0);
    for(int i = 1; i < n+1; i++){
        cin >> x;
        v[i] = v[i-1] + x;
    }
    for(int i = 0; i < m; i++){
        cin >> f >> l;
        cout << v[l] - v[f-1] << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}