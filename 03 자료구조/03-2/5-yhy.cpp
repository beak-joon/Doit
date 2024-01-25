#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N,M;
    std::cin>>N>>M;

    long sums[N+1];
    sums[0]=0;
    long count=0; //result
    long rems[M]; //0~M-1
    for(int i=0; i<M; i++){
        rems[i]=0;
    }

    for(int i=1; i<N+1; i++){
        int temp;
        std::cin>>temp;
        sums[i]=sums[i-1]+temp;
    }

    for(int i=1; i<N+1; i++){
        sums[i]=(sums[i]%M);
    }

    for(int i=1; i<N+1; i++){
        if(sums[i]==0){
            count++;
        }
        rems[sums[i]]++;
    }

    for(int i=0; i<M; i++){
        if(rems[i]>1){
            count+=(rems[i]*(rems[i]-1))/2;
        }
    }

    std::cout<<count<<'\n';

    return 0;
}