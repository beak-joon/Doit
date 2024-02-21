#include <bits/stdc++.h>

using namespace std;
struct comp{
    bool operator()(pair<int,int>& v1, pair<int,int>& v2){
        if(v1.second == v2.second) return v1.first > v2.first;
        return v1.second > v2.second;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    priority_queue<pair<int,int>, vector<pair<int,int>>, comp> pq;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int u,v;
        cin >> u >> v;
        pq.push({u,v});
    }
    int end_time = -1, result = 0;
    while(!pq.empty()){
        int start = pq.top().first;
        if(start >= end_time){ 
            end_time = pq.top().second; 
            result ++;
        }
        pq.pop();
    }
    cout << result << '\n';
    return 0;
}
