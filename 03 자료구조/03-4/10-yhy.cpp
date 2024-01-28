#include <iostream>
#include <deque>

typedef struct{
    int index;
    int data;
} Node;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::deque<Node> currentData; //현재 데이터들을 저장할 deque
    
    int N,L; //현재 데이터와 윈도우의 크기
    std::cin>>N>>L;

    int inputs[N];
    for(int i=0; i<N; i++){
        std::cin>>inputs[i];
    }

    for(int i=0; i<N; i++){

        while(!currentData.empty() && currentData.back().data>inputs[i]){
            currentData.pop_back();
        }
        Node current = {i,inputs[i]};

        currentData.push_back(current);

        if(currentData.front().index<=i-L){
            currentData.pop_front();
        }
        std::cout<<currentData.front().data<<' ';
    }

    return 0;
}