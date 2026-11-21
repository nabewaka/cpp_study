#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    bool different = false;
    vector<string> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        for (int j = 0; j < M; j++)
        {
            if (i == 0 && j != 0 && A[0][0] != A[0][j])
            {
                different = true;
            }
        }
    }

    if (different == true)
    { // Drainが詰まっている
        int ans_num = 0;
        for (int i = 0; i < M; i++)
        {
            if (A[0][i] == 'x')
            {
                ans_num = i + 1;
            }
        }
        cout << "Drain " << ans_num << endl;
    }
    else
    { // Fausetが詰まっている
        int ans_num = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i][0] == 'x')
            {
                ans_num = i + 1;
            }
        }
        cout << "Faucet " << ans_num << endl;
    }
}
