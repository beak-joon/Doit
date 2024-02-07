#include <bits/stdc++.h>

using namespace std;

bool is_answer(int a[], int b[]){
    for(int i=0; i<4; i++){
        if(a[i] > b[i]) return false;
    }
    return true;
}

int dna_indx(char c){
    if(c == 'A') return 0;
    if(c == 'C') return 1;
    if(c == 'G') return 2;
    if(c == 'T') return 3;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int S,P,count=0, agct[4], windw[4]={0};
    string dna;
    cin >> S >> P;
    cin >> dna;
    for(int i=0; i<4; i++) cin >> agct[i];
    for(int j=0; j<P; j++) windw[dna_indx(dna[j])] += 1;
    for(int i=0; i<=S-P; i++){
        if(is_answer(agct,windw)){
            count ++;
        }
        windw[dna_indx(dna[i])] -= 1;
        windw[dna_indx(dna[P+i])] += 1;
    }
    cout << count;
}
