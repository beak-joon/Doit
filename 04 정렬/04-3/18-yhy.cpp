#include <iostream> //11399번
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;

    std::vector<int> ve(N,0); //0으로 초기화
    for(int i=0; i<N; i++){
        std::cin>>ve[i];
    }

    for(int i=0; i<N; i++){
        int insert_point=i;
        for(int j=0; j<i; j++){
            if(ve[i]<=ve[j]){
                insert_point=j;
                break;
            }
        }
        int temp=ve[i];
        for(int k=i; k>insert_point; k--){
            ve[k]=ve[k-1];
        }
        ve[insert_point]=temp;
    } //삽입 정렬

    std::vector<int> sumVe(N,0); //합 배열 이용
    sumVe[0]=ve[0];
    for(int i=1; i<N; i++){
        sumVe[i]=sumVe[i-1]+ve[i];
    }
    int sum=0;
    for(int i=0; i<N; i++){
        sum+=sumVe[i];
    }
    std::cout<<sum;

    return 0;
}