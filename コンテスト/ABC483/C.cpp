#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> cand(N + 1, 0);
    vector<vector<int>> second(N + 1);
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
        cand[A[i]]++;
        second[A[i]].push_back(B[i]);
    }

    auto better = [&](int x, int y)
    {
        if (y == -1)
            return true;
        if (cand[x] != cand[y])
            return cand[x] > cand[y];
        return false;
    };

    int best1 = -1, best2 = -1;
    for (int x = 1; x <= N; x++) {
        if (better(x, best1)) {
            best2 = best1;
            best1 = x;
        } else if (better(x, best2)) {
            best2 = x;
        }
    }

    vector<int> add(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        int ans = (best1 != i) ? best1 : best2;
        int val = (ans == -1) ? -1 : cand[ans];

        for (int b : second[i]) add[b]++;

        // 増えた後の票数で比べ直す
        for (int b : second[i]) {
            int v = cand[b] + add[b];
            if (v > val || (v == val && b < ans)) {
                ans = b;
                val = v;
            }
        }

        for (int b : second[i]) add[b] = 0;

        cout << ans << endl;
    }
}