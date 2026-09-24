#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    string judge = "Yes";
    for(int i = 0; i < N; i++){
        if(T[i] != '*' && T[i] != S[i]){
            judge = "No";
        }
    }

    cout << judge << endl;
}
