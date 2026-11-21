#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    string ans;

    if(A*B > 0){
        ans = "Yes";
    }else{
        ans = "No";
    }

    cout << ans << endl;
}