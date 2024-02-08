#include <bits/stdc++.h>

using namespace std;

int n;

bool is_prime(int m){
    for(int i=2; i <= m/2; i++){
        if(m%i == 0) return false;
    }
    return true;
}

int DFS(int m, int d){
    if(d == n){
        cout << m << '\n';
        return 0;
    }
    for(int i=0; i<10; i++){
        if(i%2==0) continue;
        if(is_prime(m*10+i)) DFS(m*10+i, d+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    DFS(2,1); DFS(3,1); DFS(5,1); DFS(7,1);
    return 0;
}
