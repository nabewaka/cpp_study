#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 0)
    {
        cout << 2 << endl;
    }
    else if (N == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int64_t pre = 1;
        int64_t prepre = 2;
        int64_t luca = 0;

        for(int i = 1; i < N; i++){
            luca = pre + prepre;
            prepre = pre;
            pre = luca;
        }

        cout << luca << endl;
    }
}
