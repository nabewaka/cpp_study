#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    vector<string> A(Q);
    for(int i = 0; i < Q; i++){
        cin >> A[i];
    }

    int ID = 1;
    map<string, int> account;

    for(int i = 0; i < Q; i++){
        auto it = account.find(A[i]);

        if(it != account.end()){
            cout << it->second << endl;
        }else{
            account[A[i]] = ID;
            cout << ID << endl;
            ID++;
        }
    }
}