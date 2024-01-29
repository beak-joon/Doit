#include <iostream>
#include <queue>
#include <vector>
struct compare{
    bool operator()(int a, int b){
        int absA=abs(a);
        int absB=abs(b);
            if(absA==absB){
                return a>b;
            }
            else {
                return absA>absB;
            }
    }
}; //새로운 정렬 기준

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::priority_queue<int,std::vector<int>,compare> Q;

    int N;
    std::cin>>N;
    int temp;
    for(int i=0; i<N; i++){
        std::cin>>temp;
        if(!Q.empty() && temp==0){
            std::cout<<Q.top()<<'\n';
            Q.pop();
        }
        else if(Q.empty() && temp==0){
            std::cout<<0<<'\n';
        }
        else{
            Q.push(temp);
        }
    }

    return 0;
}