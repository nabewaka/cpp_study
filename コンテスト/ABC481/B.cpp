#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    int just_K = 0;

    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(i != 0 && i != N-1 && A[i] == K){
            just_K++;
        }
    }

    int ans = 0;
    for(int i = 0; i < N-1; i++){
        if(A[i] <= K && K <= A[i+1]){
            ans++;
        }else if(A[i+1] <= K && K <= A[i]){
            ans++;
        }
    }

    ans -= just_K;

    cout << ans << endl;
}