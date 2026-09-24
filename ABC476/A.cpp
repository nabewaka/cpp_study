#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    if(S[S.size() - 1] == 'e'){
        S.push_back('r');
    }else{
        S.push_back('e');
        S.push_back('r');
    }
    cout << S << endl;
}
