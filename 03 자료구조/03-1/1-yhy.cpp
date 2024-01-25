#include <iostream>
#include <string>
int main(){
    int N;
    std::string nums;

    std::cin>>N;
    std::cin>>nums;

    int sum=0;

    for(int i=0; i<N; i++){
        sum+=(int) nums[i] - (int) '0';
    }

    std::cout<<sum;
    
    return 0;
}