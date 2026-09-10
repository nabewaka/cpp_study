#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N, 0);
    int x_or = 0;
    set<int> pos;

    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            x--;
            x_or ^= A[x];
            A[x]++;
            x_or ^= A[x];
            pos.insert(x);
        }
        else
        {
            vector<int> toZero;
            for (int idx : pos)
            {
                x_or ^= A[idx];
                A[idx]--;
                x_or ^= A[idx];
                if (A[idx] == 0)
                    toZero.push_back(idx);
            }
            for (int idx : toZero)
                pos.erase(idx);
        }
        cout << x_or << endl;
    }
}
