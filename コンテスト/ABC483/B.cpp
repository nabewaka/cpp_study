#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    
    vector<int> K(Q);
    for(int i = 0; i < Q; i++){
        cin >> K[i];
        K[i]--;
    }

    vector<int> c(N);
    for(int i = 0; i < N; i++){
        c[i] = i+1;
    }

    for(int i = 0; i < Q; i++){
        for(int j = 0; j <= K[i]; j++){
            c[j] *= -1;
        }
        reverse(c.begin(), c.begin()+K[i]+1);
    }

    for(int i = 0; i < N; i++){
        cout << c[i] << endl;
    }



}