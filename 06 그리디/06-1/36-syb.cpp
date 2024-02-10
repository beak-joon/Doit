#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, char delimiter)
{
    vector<string> result;
    stringstream mystream(input);
    string splitdata;

    while(getline(mystream, splitdata, delimiter)){
        result.push_back(splitdata);
    }
    return result;
}

int mySum(string num)
{
    int sum = 0;
    vector<string> N = split(num,'+');
    for(int i=0; i<N.size(); i++){
        sum += stoi(N[i]);
    }
    return sum;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int result = 0;
    string example; cin >> example;
    vector<string> str = split(example, '-');

    for(int i=0; i<str.size(); i++){
        int temp = mySum(str[i]);
        if(i==0){
            result = result + temp;
        }
        else{
            result = result - temp;
        }
    }
    cout << result;
    return 0;
}
