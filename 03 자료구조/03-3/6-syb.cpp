#include <iostream>

using namespace std;

int main()
{
    int start_idx = 1, end_idx = 1, sum = 1, count = 1;
    int N;
    cin >> N;
    while(end_idx != N){
        if(sum > N){
            sum -= start_idx;
            start_idx++;
        }
        else if(sum < N){
            end_idx++;
            sum += end_idx;
        }
        else if(sum == N){
            count++;
            end_idx++;
            sum += end_idx;
        }
    }
    cout << count;
    return 0;
}
