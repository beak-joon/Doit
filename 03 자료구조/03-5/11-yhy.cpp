#include <iostream>
#include <stack>
#include <vector>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin>>n;

    std::vector<int> nums(n);
    std::vector<char> result;
    for(int i=0; i<n; i++){
        std::cin>>nums[i];
    }

    std::stack<int> arr;
    int num=1;

    for(int i=0; i<n; i++){
        if(nums[i]>=num){
            while(nums[i]>=num){
                arr.push(num++);
                result.push_back('+');
            }
            arr.pop();
            result.push_back('-');
        }
        else if(nums[i]<num){
            int current=arr.top();
            if(current>nums[i]){
                std::cout<<"NO";
                return 0;
            }
            else{
                arr.pop();
                result.push_back('-');
            }
        }
    }
    for(int i=0; i<result.size(); i++){
        std::cout<<result[i]<<'\n';
    }
    return 0;
}