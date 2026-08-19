#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin >> p;

    int price;
    // パターン1
    if (p == 1)
    {
        cin >> price;
    }

    string text = "NULL";
    // パターン2
    if (p == 2)
    {
        cin >> text >> price;
    }

    int N;
    cin >> N;

    if (text != "NULL")
    {
        cout << text << "!" << endl;
    }
    cout << price * N << endl;
}
