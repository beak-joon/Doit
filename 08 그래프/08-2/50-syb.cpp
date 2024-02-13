#include <bits/stdc++.h>

using namespace std;
vector<int> num;

int find(int n){
    if(num[n] == n) return n;
    else return num[n] = find(num[n]);
}

void unionfuc(int n1, int n2){
    int r1 = find(n1);
    int r2 = find(n2);

    if(r1 != r2) num[r2] = r1;
}

bool checkSame(int n1,int n2){
    int r1 = find(n1);
    int r2 = find(n2);

    if(r1 == r2) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m; cin >> n >> m;
    num = vector<int>(n+1);

    for(int i=0; i<=n; i++) num[i] = i;
    for(int i=0; i<m; i++){
        int s,n1,n2; cin >> s >> n1 >> n2;
        if(s == 0){
            unionfuc(n1,n2);
        }
        else{
            if(checkSame(n1,n2)) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
}
