//12891 DNA 비밀번호
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int a[4]; //ACGT
int cnt[4];
int chk = 0;

void Add(char c){
    switch (c){
    case 'A':
        cnt[0]++;
        if(cnt[0] == a[0]){chk++;}
        break;
    case 'C':
        cnt[1]++;
        if(cnt[1] == a[1]){chk++;}
        break;
    case 'G':
        cnt[2]++;
        if(cnt[2] == a[2]){chk++;}
        break;
    case 'T':
        cnt[3]++;
        if(cnt[3] == a[3]){chk++;}
        break;
    }
}

void Remove(char c){
    switch (c){
    case 'A':
        if(cnt[0] == a[0]){chk--;}
        cnt[0]--;
        break;
    case 'C':
        if(cnt[1] == a[1]){chk--;}
        cnt[1]--;
        break;
    case 'G':
        if(cnt[2] == a[2]){chk--;}
        cnt[2]--;
        break;
    case 'T':
        if(cnt[3] == a[3]){chk--;}
        cnt[3]--;
        break;
    }
}

void Main(){
    int n, m;
    int ans = 0;
    string s;

    cin >> n >> m >> s;
    for(int i = 0; i < 4; i++){
        cin >> a[i];
        if(a[i] == 0){chk++;}
    }
    for(int i = 0; i < m; i++){Add(s[i]);}
    if(chk == 4){ans++;}

    for(int i = m; i < n; i++){
        int j = i - m;
        Add(s[i]);
        Remove(s[j]);
        if(chk == 4){ans++;}
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Main();
    return 0;
}