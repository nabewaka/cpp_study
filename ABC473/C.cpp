#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> cla(K, 0);

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        cla.at(a - 1) ++;
    }

    int number = 1;

    auto max = max_element(cla.begin(), cla.end());
    int max_val = *max;
    cla.erase(max);

    for (int a : cla)
    {
        if (a >= max_val - 1)
        {
            number++;
        }
    }

    cout << number << endl;
}



