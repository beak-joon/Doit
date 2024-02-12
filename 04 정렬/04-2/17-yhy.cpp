#include <iostream> //1427번
#include <string>
#include <algorithm>
#include <vector>
void swap(int& a, int&b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string input;
    std::cin>>input;

    std::vector<int> ve(input.length(),0); //문자열 길이만큼의 벡터 선언 & 0으로 초기화

    for(int i=0; i<input.length(); i++){
        ve[i]=input[i]-'0';
    }

    //std::sort(ve.begin(),ve.end(),std::greater<int>()); 알고리즘 라이브러리를 이용한 정렬


    
    for(int i=0; i<input.length(); i++){
        int max_index=i;
        for(int j=i; j<input.length(); j++){
            if(ve[j]>ve[max_index]){
                max_index=j;
            }
        }
        swap(ve[i],ve[max_index]);
    }

    for(int i=0; i<input.length(); i++){
        std::cout<<ve[i];
    }
    
    return 0;
}