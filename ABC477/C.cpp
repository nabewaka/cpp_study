#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    string S, T;
    cin >> S >> T;

    int m = S.size(), n = T.size();

    // 各文字までの一致の累積話
    vector<int> cnt(m + 1, 0);
    for (int st = 0; st < m; st++) {
        bool match = (st + n <= m && S.compare(st, n, T) == 0);
        cnt[st + 1] = cnt[st] + (match ? 1 : 0);
    }

    for (int q = 0; q < Q; q++) {
        int L, R;
        cin >> L >> R;
        L -= 1;
        R -= 1;

        int last = R - n + 1;  // 収まる最後の開始位置
        if (last >= L && cnt[last + 1] - cnt[L] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
