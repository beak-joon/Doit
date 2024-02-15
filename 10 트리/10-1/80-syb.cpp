#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N=0,M; cin >> M;
    int color[50];
    for(int i=0; i<M; i++){
        cin >> color[i];
        N += color[i];
    }
    int K; cin >> K;
    double a = 0;
    for(int i=0; i<M; i++){
        if(color[i] >= K){
            double p = 1.0;
            for(int j=0; j<K; j++){
                p *= (double) (color[i]-j)/(N-j);
            }
            a += p;
        }
    }
    printf("%.9f\n", a);
    return 0;
}
