#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N),B(N-1);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N-1; i++){
        cin >> B[i];
    }

    int ans1 = 0;
    int ans2 = 0;
    vector<int> A_copy = A;
    for(int i = 0; i < N-1; i++){
        while((A[i] + A[i+1])% M != B[i]){
            A[i+1]++;
            ans1++;
        }
    }

    A_copy[0]++;
    ans2++;
    for(int i = 0; i < N-1; i++){
        while((A_copy[i] + A_copy[i+1])% M != B[i]){
            A_copy[i+1]++;
            ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;

}
