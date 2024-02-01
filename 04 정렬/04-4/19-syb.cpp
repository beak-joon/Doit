#include<bits/stdc++.h>

using namespace std;

void swap(vector <int> &v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int find_pivot(vector<int> &v, int S, int E){
    if(S + 1 == E){
        if(v[S] > v[E]){
            swap(v,S,E);
        }
        return E;
    }
    int pivot = v[S];
    int i = S + 1, j = E;
    while(i <= j){
        while(j >= S+1 && pivot < v[j]) j--;
        while(i <= E && pivot > v[i]) i++;

        if(i < j) swap(v,i++,j--);
        else break;
    }

    v[S] = v[j];
    v[j] = pivot;
    return j;
}

void quick_sort(vector <int> &v, int S, int E, int K){
    int pivot = find_pivot(v, S, E);
    if(pivot == K){
        return ;
    }
    else if (K < pivot){
        quick_sort(v,S,pivot-1,K);
    }
    else{
        quick_sort(v,pivot + 1, E, K);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,K;
    cin >> N >> K;
    vector<int> v(N,0);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    quick_sort(v,0,N-1,K-1);
    cout << v[K-1];
    return 0;
}
