#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);

    // dfs(i, s): i 番目の項まで値を決めていて、重み付き和が s の状態
    function<void(int, int)> dfs = [&](int i, int s) {
        if (i == N - 1) {                 // 最後の 1 項になったら
            if ((K - s) % N == 0) {       // 残りをちょうど K にできるときのみ
                A[i] = (K - s) / N;
                for (int j = 0; j < N; ++j) {  // 出力
                    if (j) cout << ' ';
                    cout << A[j];
                }
                cout << '\n';
            }
            return;
        }
        // i 項目を 0, 1, 2, ... と決めて再帰
        for (int x = 0; x <= (K - s) / (i + 1); ++x) {
            A[i] = x;
            dfs(i + 1, s + x * (i + 1));
        }
    };

    dfs(0, 0);
    return 0;
}