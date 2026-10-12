#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S;
    int64_t L;
    cin >> N >> S >> L;

    vector<int64_t> d(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> d.at(i);
    }

    vector<int64_t> pos(N, 0);
    for (int i = 1; i < N; i++)
    {
        pos.at(i) = pos.at(i - 1) + d.at(i - 1);
    }

    int s = S - 1;
    int ans = 1;

    // 左端まで先に行ってから右へ折り返す
    int r = N - 1;
    for (int l = s; l >= 0; l--)
    {
        int64_t cost_left = 2 * (pos.at(s) - pos.at(l));
        if (cost_left > L)
        {
            break;
        }
        while (r > s && cost_left + (pos.at(r) - pos.at(s)) > L)
        {
            r--;
        }
        ans = max(ans, r - l + 1);
    }

    // 右端まで先に行ってから左へ折り返す
    int l = 0;
    for (int r = s; r < N; r++)
    {
        int64_t cost_right = 2 * (pos.at(r) - pos.at(s));
        if (cost_right > L)
        {
            break;
        }
        while (l < s && cost_right + (pos.at(s) - pos.at(l)) > L)
        {
            l++;
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans << endl;
}
