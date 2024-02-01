#include <iostream> //1377번
#include <vector>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin>>N;
    int temp;
    std::vector<std::pair<int,int> > ve(N);
    for(int i=0; i<N; i++){
        std::cin>>ve[i].first; //ve의 각 요소는 (data,index)
        ve[i].second=i;
    }

    sort(ve.begin(),ve.end()); //ve를 정렬

    int Max=ve[0].second-0;
    for(int i=1; i<N; i++){
        if(Max<ve[i].second-i){
            Max=ve[i].second-i;
        }
    }

    std::cout<<Max+1<<'\n';

    return 0;
}
