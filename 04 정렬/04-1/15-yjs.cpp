//2750 수 정렬하기
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[1005];

void Main(){
    int n;
    cin >> n;
    // 입력
    for(int i=0; i<n; i++){cin >> arr[i];}
    // 버블 정렬
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    // 출력
    for(int i=0; i<n; i++){cout << arr[i] << endl;}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}
