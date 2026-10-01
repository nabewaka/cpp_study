#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int n = S.size();

    int ans = 0;

    for (int i = 0; i < 2; i++) //0の時奇数、1の時偶数
    {
        for (int j = 0; j < n; j++)
        {
            int l = j - i, r = j;
            int cnt = 0;

            while (0 <= l and r < n)
            {
                if (S[l] != S[r])
                {
                    cnt += 1;
                }

                if (cnt == 2)
                {
                    break;
                }
                l -= 1;
                r += 1;
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}
