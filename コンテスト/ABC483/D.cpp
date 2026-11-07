#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    long long plus = 0, minus = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] >= 0)
        {
            plus += A[i];
        }
        else
        {
            minus += A[i];
        }
    }
    if (plus > minus * (-1))
    {
        auto max_it = max_element(A.begin(), A.end());
        *max_it *= -1;
        plus += *max_it;
        minus += *max_it;
    }
    else if (plus < minus * (-1))
    {
        auto min_it = min_element(A.begin(), A.end());
        *min_it *= -1;
        plus += *min_it;
        minus += *min_it;
    }
    else
    {
        auto max_it = max_element(A.begin(), A.end());
        auto min_it = min_element(A.begin(), A.end());
        if (*max_it >= abs(*min_it))
        {
            *max_it *= -1;
            plus += *max_it;
            minus += *max_it;
        }
        else
        {
            *min_it *= -1;
            plus += *min_it;
            minus += *min_it;
        }
    }

    long long ans = 0;
    if (plus > minus * (-1))
    {
        ans = minus * (-1) + (plus + minus) + 1;
    }
    else if (plus < minus * (-1))
    {
        ans = plus + -1 * (plus + minus) + 1;
    }
    else
    {
        ans = plus + 1;
    }

    cout << ans << endl;
}