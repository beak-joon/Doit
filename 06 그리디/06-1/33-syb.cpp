#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++){
        int card; cin >> card;
        pq.push(card);
    }

    int result = 0;

    while(pq.size()!=1){
        int card1 = pq.top(); pq.pop();
        int card2 = pq.top(); pq.pop();
        result += (card1 + card2);
        pq.push(card1 + card2);
    }
    cout << result;
    return 0;
}
