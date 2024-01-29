#include <iostream>
#include <stack>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;
    std::vector<int> nums(N);
    std::vector<int> result(N,-1);

    for(int i=0; i<N; i++){
        std::cin>>nums[i];
    }

    std::stack<int> Stack;
    Stack.push(0);

    for(int i=1; i<N; i++){
        while(!Stack.empty() && nums[Stack.top()]<nums[i]){
            result[Stack.top()]=nums[i];
            Stack.pop();
        }
        Stack.push(i);
    }

    while(!Stack.empty()){
        result[Stack.top()]=-1;
        Stack.pop();
    }

    for(int i=0; i<N; i++){
        std::cout<<result[i]<<' ';
    }

    return 0;
}