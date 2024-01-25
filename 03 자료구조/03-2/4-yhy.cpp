#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N,M;
    std::cin>>N>>M;
    
    int matrix[N+1][N+1];
    int sums[N+1][N+1];

    for(int i=0; i<N+1; i++){
        for(int j=0; j<N+1; j++){
            matrix[i][j]=0;
            sums[i][j]=0;
        }
   }

    for(int i=1; i<N+1; i++){
        for(int j=1; j<N+1; j++){
            std::cin>>matrix[i][j];
        }
    }

    for(int i=1; i<N+1; i++){
        for(int j=1; j<N+1; j++){
            sums[i][j]=sums[i-1][j]+sums[i][j-1]-sums[i-1][j-1]+matrix[i][j];
        }
    }
    int X1,Y1,X2,Y2;
    for(int i=0; i<M; i++){
        std::cin>>X1>>Y1>>X2>>Y2;
        std::cout<<sums[X2][Y2]-sums[X1-1][Y2]-sums[X2][Y1-1]+sums[X1-1][Y1-1]<<'\n';
    }

    return 0;
}