#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    cin >> N;

    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());

    int Q;
    cin >> Q;

    vector<long long> B(Q);
    for(int i = 0; i < Q; i++){
        cin >> B[i];
    }

    for(int i = 0; i < Q; i++){
        long long mini = -1;
        int down = -1;

        int j = lower_bound(A.begin(), A.end(), B[i]) - A.begin();

        if(j == N){
            mini = abs(A[j-1]-B[i]);
        }else if(j == 0){
            mini = abs(A[j]-B[i]);
        }else{
            mini = min(abs(A[j]-B[i]),abs(A[j-1]-B[i]));
        }

        cout << mini << endl;
        
    }
}