//1874 스택 수열
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<char> ans;
    stack<int> s;
    for(int i = 0; i < n; i++){cin >> v[i];}
    bool valid = true;
    int cur = 1;
    int ci = 0; //current index

    while(1){
        if(!s.empty() && (s.top() == v[ci])){ans.push_back('-'); s.pop(); ci++;}
        else if(!s.empty() && s.top() > v[ci]){valid = false; break;}
        else if(cur <= n && v[ci] >= cur){s.push(cur); cur++; ans.push_back('+');}
        else if(ans.size() == 2*n){break;}
    }

    if(valid){
        for(int i = 0; i < 2*n; i++){cout << ans[i] << endl;}
    }
    else{cout << "NO" << endl;}

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}
