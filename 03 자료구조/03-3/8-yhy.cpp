#include <iostream>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;

    int nums[N];
    for(int i=0; i<N; i++){
        std::cin>>nums[i];
    }
    std::sort(nums,nums+sizeof(nums)/sizeof(int));

    int count=0;
    for(int i=0; i<N; i++){
        int target=nums[i];
        int start_index=0;
        int end_index=N-1;
        while(start_index<end_index){
            if(nums[start_index]+nums[end_index]==target){
                if(start_index!=i && end_index!=i){ //자기 자신은 포함 x
                    count++;
                    break;
                }
                else if(start_index==i){
                    start_index++;
                }
                else if(end_index==i){
                    end_index--;
                }
                
            }
            else if(nums[start_index]+nums[end_index]<target){
                start_index++;
            }
            else if(nums[start_index]+nums[end_index]>target){
                end_index--;
            }
        }
    }

    std::cout<<count<<'\n';

    return 0;
}