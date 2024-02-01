#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,M,arr[15001];
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);
    int i = 0, j = N - 1, count = 0;
    while(i<j){
        if(arr[i] + arr[j] > M) j--;
        else if(arr[i] + arr[j] < M) i++;
        else{
            i++; j--;
            count ++;
        }
    }
    cout << count;
    return 0;
}
