//2018 수들의 합 5
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n;
    int f = 1, l = 1, ans = 1;
    int sum = 1;
    cin >> n;
    while(l != n){
        if(sum == n){ans++; l++; sum += l;}
        else if(sum > n){sum -= f; f++;}
        else if(sum < n){l++; sum += l;}
    }
    cout << ans << endl;


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}