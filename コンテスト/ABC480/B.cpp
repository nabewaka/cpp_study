#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    vector<string> T(M);
    for (int i = 0; i < M; i++)
    {
        cin >> T[i];
    }

    vector<int> ans(N, 0);

    for (int i = 0; i < M; i++)
    {
        vector<int> num_one_wrong;
        bool same = false;

        for (int j = 0; j < N; j++)
        {
            if (T[i].size() != S[j].size())
            {
                continue;
            }
            else
            {
                if (T[i] == S[j])
                {
                    ans[j]++;
                    same = true;
                }
                else
                {
                    int wrong = 0;
                    for (int k = 0; k < T[i].size(); k++)
                    {
                        if (T[i][k] == S[j][k])
                        {
                            continue;
                        }
                        else
                        {
                            if (wrong == 0)
                            {
                                wrong++;
                                continue;
                            }
                            else
                            {
                                wrong++;
                                break;
                            }
                        }
                    }
                    if (wrong == 1)
                    {
                        num_one_wrong.push_back(j);
                    }
                }
            }
        }
        if (!num_one_wrong.empty())
        {
            if (same == false && num_one_wrong.size() == 1)
            {
                ans[num_one_wrong[0]]++;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << endl;
    }
}