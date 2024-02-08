#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, idx=1;
    cin >> n;
    stack<int> myStack;
    vector<int> v(n);
    vector<char> r;
    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<v.size(); i++){
        if(idx <= v[i]){
            while(idx <= v[i]){
                myStack.push(idx++);
                r.push_back('+');
            }
            myStack.pop();
            r.push_back('-');
        }
        else{
            if(myStack.top() > v[i]){
                cout << "NO";
                return 0;
            }
            myStack.pop();
            r.push_back('-');
        }
    }
    for(int i=0; i<r.size(); i++){
        cout << r[i] << '\n';    
    } 
    return 0;
}
