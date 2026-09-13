#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> cnt(N+1, 0);
    map<pair<int,int>, int> pairCnt; 

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        cnt[a]++;
        cnt[b]++;
        pairCnt[{a, b}]++;
    }

    vector<int64_t> freq(M+1, 0);
    for (int p = 1; p <= N; p++){
        if (cnt[p] <= M){
            freq[cnt[p]]++;
        }
    }

    int64_t A = 0;
    for (int v = 0; v <= M; v++){
        int u = M - v;
        if (v < u)       A += freq[v] * freq[u];
        else if (v == u) A += freq[v] * (freq[v] - 1) / 2;
    }

    int64_t ans = A;
    for(const auto& [pr, w]: pairCnt){
        int x = pr.first, y = pr.second;
        int64_t sum = (int64_t)cnt[x] + cnt[y];

        bool countedInA = (sum == M);
        bool reallyOK   = (sum - w == M);

        if (countedInA && !reallyOK) ans--;
        if (!countedInA && reallyOK) ans++;
    }

    cout << ans << endl;

}
