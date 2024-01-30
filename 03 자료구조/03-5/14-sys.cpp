#include <iostream>
#include <queue>

using namespace std;

struct compare{
    bool operator()(int o1, int o2){
        int n1 = abs(o1);
        int n2 = abs(o2);

        if(n1 == n2) return o1 > o2;
        else return n1 > n2;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, compare> myQueue;

    int count, num;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> num;
        if(num != 0){
            myQueue.push(num);
        }
        else{
            if(myQueue.empty()){ 
                cout << "0\n";
            }
            else {
                cout << myQueue.top() << '\n';
                myQueue.pop();
            }
        }
    }
}
