#include <iostream>
#include <algorithm>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N,M;
    std::cin>>N;
    std::cin>>M;

    int nums[N];
    for(int i=0; i<N; i++){
        std::cin>>nums[i];
    }

    std::sort(nums,nums+sizeof(nums)/sizeof(int));

    int count=0;
    int start_index=0;
    int end_index=N-1;
    
    while(start_index<end_index){
        if(nums[start_index]+nums[end_index]==M){
            count++;
            start_index++;
            end_index--;
        }
        else if(nums[start_index]+nums[end_index]<M){
            start_index++;
        }
        else if(nums[start_index]+nums[end_index]>M){
            end_index--;
        }
    }

    std::cout<<count;

    return 0;
}