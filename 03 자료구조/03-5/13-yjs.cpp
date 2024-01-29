//2164 카드2
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n;
    cin >> n;
    queue<int> q;
    for(int i = 1; i < n+1; i++){q.push(i);}
    while(q.size() != 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front() << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}