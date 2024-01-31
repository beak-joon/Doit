//11004 K번쨰 수
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void swap(vector<int> &a, int i, int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int partition(vector<int> &a, int s, int e){
    if(s+1 == e){
        if(a[s] > a[e]){swap(a, s, e);}
        return e;
    }
    
    int m = (s + e) / 2;
    swap(a, s, m);
    int pivot = a[s];
    int i = s+1, j = e;

    while(i <= j){
        while(j >= s+1 && pivot < a[j]){j--;}
        while(i <= e && pivot > a[i]){i++;}
        if(i < j){swap(a, i++, j--);}
        else{break;}
    }
    a[s] = a[j];
    a[j] = pivot;
    return j;

}

void quickSort(vector<int> &a, int s, int e, int k){
    int pivot = partition(a, s, e);
    if(pivot == k){return;}
    else if(k < pivot){quickSort(a, s, pivot-1, k);}
    else{quickSort(a, pivot+1, e, k);}
}

void Main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin >> v[i];}
    quickSort(v, 0, n-1, k-1);
    cout << v[k-1] << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}
