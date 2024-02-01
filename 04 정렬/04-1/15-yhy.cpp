#include <iostream> //2750번
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;

    std::vector<int> ve(N);
    int temp;
    for(int i=0; i<N; i++){
        std::cin>>ve[i];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(ve[i]<ve[j]){
                temp=ve[i];
                ve[i]=ve[j];
                ve[j]=temp;
            }
        }
    }

    for(int i=0; i<N; i++){
        std::cout<<ve[i]<<'\n';
    }
    
    return 0;
}