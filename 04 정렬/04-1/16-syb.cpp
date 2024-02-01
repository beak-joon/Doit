#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, max=0;
    cin >> n;
    vector<pair<int,int>> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    for(int i=1; i<=n; i++){
        if(max < v[i].second - i) max = v[i].second - i;
    }
    cout << max + 1;
}
