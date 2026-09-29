#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> P(N), P_inv(N);

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
        P_inv[P[i]-1] = i+1;
    }

    for (int i = 0; i < Q; i++)
    {
        int query;
        cin >> query;

        if (query == 1)
        {
            int x, y;
            cin >> x >> y;
            swap(P.at(x - 1), P.at(y - 1));
            swap(P_inv[P.at(x - 1) -1], P_inv[P.at(y - 1) -1]);
        }
        else
        {
            swap(P, P_inv);
        }
    }

    for(int i = 0; i < N; i++){
        cout << P.at(i) ;
        (i != N-1) ? (cout << " ") : (cout << endl);
    }

}
