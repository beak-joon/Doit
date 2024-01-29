//11286 절댓값 힙
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

struct cmp{
    // 구조체 + 연산자 오버로딩으로 비교 함수 제작
    bool operator()(int a, int b){
        int absA = abs(a);
        int absB = abs(b);
        if(absA == absB){return a > b;}
        else{return absA > absB;}
    }
};

void Main(){
    int n, x;
    cin >> n;

    priority_queue<int, vector<int>, cmp> q;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 0){
            if(q.empty()){cout << 0 << endl;}
            else{cout << q.top() << endl; q.pop();}
        }
        else{q.push(x);}
    }


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}