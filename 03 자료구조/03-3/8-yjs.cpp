//1253 좋다
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void Main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    for(int i = 0; i < n; i++){cin >> v[i];}
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        int f = 0, l = n-1;
        bool good = false;
        while(f < l){
            if((v[f] + v[l] == v[i])){
                if(f != i && l != i){good = true; break;}
                else if(f == i){f++;}
                else if(l == i){l--;}
            }
            else if(v[f] + v[l] > v[i]){l--;}
            else if(v[f] + v[l] < v[i]){f++;}

        }
        if(good){ans++;}
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}