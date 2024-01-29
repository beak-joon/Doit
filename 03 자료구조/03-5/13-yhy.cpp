#include <iostream>
#include <vector>
#include <queue>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;

    std::queue<int> qu;
    for(int i=1; i<=N; i++){
        qu.push(i);
    }

    while(true){
        if(qu.size()==1){
            break;
        }
        else{
            qu.pop();
            qu.push(qu.front());
            qu.pop();
        }
    }

    std::cout<<qu.front();

    return 0;
}