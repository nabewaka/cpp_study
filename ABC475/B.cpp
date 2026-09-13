#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int num_100 = 0, num_10 = 0, num_1 = 0;

    for (int i = 0; i < N; i++)
    {

        if ((A.at(i) % 1000) != 0)
        {
            int temp = 0;

            int use_1000 = A.at(i) / 1000 + 1;

            temp = 1000 * use_1000 - A.at(i);

            num_100 += temp / 100;

            temp %= 100;

            num_10 += temp / 10;

            temp %= 10;

            num_1 += temp;
        }
    }

    cout << num_1 << " " << num_10 << " " << num_100 << endl;
}
