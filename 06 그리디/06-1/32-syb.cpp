
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();
    int N,K, count = 0;
    cin >> N >> K;
    vector<int> v;
    for(int i=0; i<N; i++){
        int c;
        cin >> c;
        v.push_back(c); 
    }
    for(int i=N-1; i>=0; i--){
        while(v[i] <= K){
            K = K - v[i];
            count ++;
        }
        if(K==0) break;
    }
    cout << count;
    return 0;
}
