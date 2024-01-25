#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N,M,a,b;
    std::cin>>N>>M;

    int sum[N+1]; //0~N까지 인덱스 존재
    int temp=0;
    sum[0]=0;
    for(int i=1; i<N+1; i++){
        std::cin>>temp;
        sum[i]=sum[i-1]+temp;
    }


    for(int i=0; i<M; i++){
       std::cin>>a>>b;
       std::cout<<(sum[b]-sum[a-1])<<'\n';
    }
    

    return 0;
}