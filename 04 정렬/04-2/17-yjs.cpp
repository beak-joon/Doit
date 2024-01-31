//1427 소트인사이드
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[10];

void Main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){arr[s[i]-'0']++;}

    for(int i=9; i>=0; i--){
        for(int j=0; j<arr[i]; j++){cout << i;}
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}
