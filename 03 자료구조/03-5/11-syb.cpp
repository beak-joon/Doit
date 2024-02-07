#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int>Node;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,L;
    cin >> N >> L;
    deque<Node> mydeque;
    for(int i=0; i<N; i++){
        int now;
        cin >> now;
        while(mydeque.size() && mydeque.back().first > now){
            mydeque.pop_back();
        }
        mydeque.push_back(Node(now,i));
        if(mydeque.front().second <= i - L){
            mydeque.pop_front();
        }
        cout << mydeque.front().first << ' ';
    }
    return 0;
}
