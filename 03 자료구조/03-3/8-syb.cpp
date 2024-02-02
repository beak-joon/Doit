#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    long long arr[2001];

    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr+N);
    int idx = 2, count = 0;
    int i=0, j=1;
    while(idx != N){
        if(arr[i] + arr[j] == arr[idx]){
            if(i != idx && j != idx){ count++; idx++; i=0; j=idx-1; }
            else if(i==idx){ i++; }
            else if(j==idx){ j--; }
        } 
        else if(arr[i] + arr[j] > arr[idx]){
            j--;
            if(i >= j){
                idx++; i=0; 
                j=idx-1;
            }
        }
        else{
            i++;
            if(i >= j){
                idx++; i=0; 
                j=idx-1;
            }
        }

    }
    cout << count;
    return 0;
}
