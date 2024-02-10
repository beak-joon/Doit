#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> pq_m;
    priority_queue<int, vector<int>, less<int>> pq_n;
    int N; cin >> N;
    int m=0,n=0,result=0;
    for(int i=0; i<N; i++){
        int num; cin >> num;
        if(num > 0){ 
            pq_n.push(num); n++;
        }
        else{
            pq_m.push(num); m++;
        }
    }
    while(!pq_m.empty()){
        if(pq_m.size()>1){
            int x = pq_m.top(); pq_m.pop();
            int y = pq_m.top(); pq_m.pop();
            result += (x*y);
        }
        else{
            result += pq_m.top(); pq_m.pop();
        }
    }
    while(!pq_n.empty()){
        if(pq_n.size()>1 && pq_n.top() != 1){
            int x = pq_n.top(); pq_n.pop();
            int y = pq_n.top(); pq_n.pop();
            if(x != 1 && y != 1) result += (x*y);
            else result += (x+y);
        }
        else{
            result += pq_n.top(); pq_n.pop();
        }
    }
    cout << result;
    return 0;
}
