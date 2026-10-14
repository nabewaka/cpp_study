#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> C(N+1, 0), P(N+1, 0);
    for(int i = 1; i < N+1; i++){
        cin >> C[i] >> P[i];
    }

    int Q;
    cin >> Q;

    vector<int> L(Q+1, 0), R(Q+1, 0);

    for(int i = 1; i < Q+1; i++){
        cin >> L[i] >> R[i];
    }

    vector<int> sum1(N+1, 0), sum2(N+1, 0);

    for(int i = 1; i <= N; i++){
        sum1[i] = sum1[i-1];
        sum2[i] = sum2 [i-1];

        if(C[i] == 1){
            sum1[i] += P[i];
        }else{
            sum2[i] += P[i];
        }
    }

    for(int i = 1; i <= Q; i++){
        int ans1 = sum1[R[i]] - sum1[L[i]-1];
        int ans2 = sum2[R[i]] - sum2[L[i]-1];

        cout << ans1 << " " << ans2 << endl;
    }


}