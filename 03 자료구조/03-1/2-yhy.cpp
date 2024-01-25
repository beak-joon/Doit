#include <iostream>

int main(){
    int N;
    std::cin>>N;
    
    int scores[N];
    float sum=0;

    for(int i=0; i<N; i++){
        std::cin>>scores[i];
        sum+=scores[i];
    }

    int max=scores[0];

    for(int i=1; i<N; i++){
        if(max<scores[i]){
            max=scores[i];
        }
    } //최대값 구하기

    float mean= (sum*100)/(max*N);
    std::cout<<mean;

    return 0;
}