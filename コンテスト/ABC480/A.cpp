#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector <char>> S(2,vector<char>(2));
    cin >> S[0][0] >> S[0][1] >> S[1][0] >> S[1][1];

    string ans = "Yes";

    if(S[0][0] == 'A'){
        if(S[1][1] == 'D'){
            ans = "No";
        }
    }else if(S[0][1] == 'A'){
        if(S[1][0] == 'D'){
            ans = "No";
        }
    }else if(S[1][0] == 'A'){
        if(S[0][1] == 'D'){
            ans = "No";
        }
    }else if(S[1][1] == 'A'){
        if(S[0][0] == 'D'){
            ans = "No";
        }
    }

    cout << ans << endl;
}