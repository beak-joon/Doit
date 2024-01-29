//17298 오큰수수
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    stack<int> s;

    for(int i = 0; i < n; i++){cin >> v[i];}
    s.push(0);

    for(int i = 0; i < n; i++){
        while(!s.empty() && v[s.top()] < v[i]){
            ans[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){ans[s.top()] = -1; s.pop();}

    for(int i = 0; i < n; i++){cout << ans[i] << ' ';}


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}