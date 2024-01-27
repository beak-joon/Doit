#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;

    int count=1; //start_index==end_index==N 일 때
    int start_index=1;
    int end_index=1; //포인터 두 개 
    int sum=1;

    while(end_index!=N){
        if(sum==N){
            count++;
            end_index++;
            sum+=end_index;
        }
        else if(sum>N){
            sum-=start_index;
            start_index++;
        }
        else if(sum<N){
            end_index++;
            sum+=end_index;
        }
    }

    std::cout<<count<<'\n';

    return 0;
}