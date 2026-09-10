#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N,0);
    vector<int> B(N,0);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B.at(i);
    }

    vector<int64_t> diff(N, 0);

    for (int i = 0; i < N; i++)
    {
        diff.at(i) = A.at(i) - B.at(i);
    }

    auto max_it = max_element(diff.begin(), diff.end());
    int64_t max_diff = *max_it;

    if (max_diff <= 0)
    {
        cout << "No" << endl;
    }
    else
    {
        int max_index = distance(diff.begin(), max_it);
        vector<int64_t> W(N, 1);
        W.at(max_index) = pow(10,18); 
        cout << "Yes" << endl;
        for (int i = 0; i < N; i++)
        {
            cout << W.at(i);
            cout << (i != N - 1 ? " " : "\n");
        }
    }
}
