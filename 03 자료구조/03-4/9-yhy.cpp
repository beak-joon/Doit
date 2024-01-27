#include <iostream>

void addCount(char c,int* count);
void removeCount(char c, int* count);

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int S,P; //DNA문자열의 길이, 비밀번호의 길이
    std::string DNA;
    int condition[]={0,0,0,0}; //A,C,G,T

    std::cin>>S>>P;
    std::cin>>DNA;
    std::cin>>condition[0]>>condition[1]>>condition[2]>>condition[3];

    int count[]={0,0,0,0}; //각각 현대 범위의 A,C,G,T 의 수
    int start_index=0;
    int end_index=P-1;
    int result=0; //결과

    for(int i=start_index; i<=end_index; i++){
        addCount(DNA[i],count);
    } //초기 count 설정

    if(count[0]>=condition[0] && count[1]>=condition[1] && count[2]>=condition[2] && count[3]>=condition[3]){
        result++;
    }

    while(end_index!=S-1){
        end_index++;
        addCount(DNA[end_index],count);
        removeCount(DNA[start_index],count);
        start_index++;

        if(count[0]>=condition[0] && count[1]>=condition[1] && count[2]>=condition[2] && count[3]>=condition[3]){
            result++;
        }
    }

    std::cout<<result<<'\n';

    return 0;

}

void addCount(char c, int* count){
    switch (c) {
        case 'A':
            count[0]++;
            break;
        case 'C':
            count[1]++;
            break;
        case 'G':
            count[2]++;
            break;
        case 'T':
            count[3]++;
            break;
    }
}

void removeCount(char c, int* count){
    switch (c) {
        case 'A':
            count[0]--;
            break;
        case 'C':
            count[1]--;
            break;
        case 'G':
            count[2]--;
            break;
        case 'T':
            count[3]--;
            break;
    }
}
