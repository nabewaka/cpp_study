#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }

    long long max_v = 0;

    for (int mask = 0; mask < (1 << N); mask++)
    {
        long long sum_v = 0;
        long long sum_w = 0;

        for (int i = 0; i < N; i++)
        {
            if ((mask >> i) & 1)
            {
                sum_v += A[i];
                sum_w += B[i];
            }
        }

        if (sum_v > max_v && sum_w <= W)
        {
            max_v = sum_v;
        }
    }

    cout << max_v << endl;

    //動的計画法はメモリオーバーになった
    // vector<vector<int>> dp(N+1, vector<int> (W+1, 0));
    // for(int i = 0; i < N; i++){
    //     for(int j = 1; j < W+1; j++){ // 今の容量
    //         if(j < B[i]){
    //             dp[i+1][j] = dp[i][j];
    //         }else{
    //             dp[i+1][j] = max(dp[i][j - B[i]] + A[i], dp[i][j]);
    //         }
    //     }
    // }
    // cout << dp[N][W] << endl;
}
