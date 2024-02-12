#include <iostream> //11004번, 퀵 정렬 이용
#include <vector>
void SWAP(std::vector<int> &V, int i, int j){
    int temp=V[i];
    V[i]=V[j];
    V[j]=temp;
}

int temp=0;
int part(std::vector<int> &V, int start_index, int end_index);

void quickSort(std::vector<int>& V,int start_index, int end_index, int K){
    int pivot=part(V,start_index,end_index);
    if(pivot==K){
        return;
    }
    else if(K<pivot){
        quickSort(V,start_index,pivot-1,K);
    }
    else{
        quickSort(V,pivot+1,end_index,K);
    }
}


int part(std::vector<int> &V, int start_index, int end_index){
    if(start_index+1==end_index){
        if(V[start_index]>V[end_index]){
            SWAP(V,start_index,end_index);
            return end_index;
        }
    }

    int mid_index=(start_index+end_index)/2; //중앙 인덱스 선택
    SWAP(V,start_index,mid_index); //중앙값을 시작값과 교체
    int pivot=V[start_index]; //시작값을 피벗으로 선택

    int i=start_index+1; //start_indexs는 피벗이므로 +1
    int j=end_index; 
    
    while (i<=j){
        while(j>=start_index+1 && pivot<V[j]){
            j--;
        }
        while(i<=end_index && pivot>V[i]){
            i++;
        }
        if(i<j){
            SWAP(V,i++,j--);
        }
        else{
            break;
        }
    }

    V[start_index]=V[j];
    V[j]=pivot;
    return j;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N,K;
    std::cin>>N>>K;

    std::vector<int> ve(N,0);
    for(int i=0; i<N; i++){
        std::cin>>ve[i]; //데이터를 저장할 배열
    }

    quickSort(ve,0,N-1,K-1);
    std::cout<<ve[K-1];
}