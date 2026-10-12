#include <bits/stdc++.h>
using namespace std;

bool judge(const string &s)
{
    int score = 0;

    for (auto c : s)
    {
        if (c == '(')
        {
            score++;
        }
        else
        {
            score--;
        }

        if (score < 0)
        {
            return false;
        }
    }

    return (score == 0);
}

int main()
{
    int N;
    cin >> N;

    for (int bit = 0; bit < (1 << N); bit++)
    {
        string ans = "";
        for (int i = N - 1; i >= 0; i--)
        {
            if ((bit >> i) & 1)
            {
                ans.push_back(')');
            }
            else
            {
                ans.push_back('(');
            }
        }
        if (judge(ans))
        {
            cout << ans << endl;
        }
    }
}
