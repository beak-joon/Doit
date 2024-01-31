#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); //stdio 비활성화, C++ 독립 버퍼사용
    cin.tie(0); cout.tie(0); //cout 출력 버퍼지우는 작업 생략

    int N,M,input;
    long C = 0;
    cin >> N >> M;

    vector<long> sum(N,0);
    vector<long> answer(M,0);
    cin >> sum[0];
    for(int i=1; i < N; i++){
        cin >> input;
        sum[i] = sum[i-1] + input;
    }
    for(int i=0; i < N; i++){
        int remain = sum[i] % M;
        answer[remain] += 1;
        if(remain == 0) C += 1; 
    }
    for(int i=0; i<M; i++){
        if(answer[i] > 1){
            C += (answer[i]*(answer[i]-1)/2);
        }
    }
    cout << C;
    return 0;
}
