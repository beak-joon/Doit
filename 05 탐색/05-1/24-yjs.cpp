//2023 신기한 소수
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int N;

bool isPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){return 0;}
    }
    return 1;
}

void DFS(int n, int jari){
    if(jari == N){
        if(isPrime(n)){cout << n << endl;}
        return;
    }
    for(int i=1; i<10; i++){
        if(i%2 == 0){continue;}
        if(isPrime(n*10+i)){DFS(n*10+i, jari+1);}
    }

}

void Main(){
    cin >> N;
    DFS(2,1);
    DFS(3,1);
    DFS(5,1);
    DFS(7,1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}