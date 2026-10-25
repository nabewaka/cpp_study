#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int sum = A + B;

    int ans = 1;
    if(sum >= 10){
        ans = 2;
    }

    cout << ans << endl;
}