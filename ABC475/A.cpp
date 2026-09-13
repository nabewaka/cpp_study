#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;

    getline(cin, S);

    string ans;

    for(int i = 0; i < S.size(); i++){
        ans.push_back(S[i]);
        if(i != S.size()-1){
            ans.push_back('o');
        }
    }

    cout << ans << endl;

}
