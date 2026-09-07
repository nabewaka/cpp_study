#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        A.push_back(a);
    }

    int candi = A.at(0);

    for (int i = 0; i < N; i++)
    {
        candi = A.at(i);
        if (candi == -1)
        {
            continue;
        }
        for (int j = i + 1; j < N; j++)
        {
            if (candi == A.at(j))
            {
                A.at(j) = -1;
                A.at(i) = -1;
                break;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (A.at(i) != -1)
        {
            sum += A.at(i);
        }
    }

    cout << sum << endl;
}