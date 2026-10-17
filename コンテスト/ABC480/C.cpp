#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, T;
    cin >> N >> K >> T;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int sh_time = 0;
    int ans = 0;

    int a_num = 0;
    if (A[a_num] == 0)
    {
        sh_time = K;
        a_num++;
    }

    for (a_num; a_num < N-1; a_num++)
    {
        int diff = A[a_num + 1]- A[a_num]

    }
    cout << ans << endl;
}