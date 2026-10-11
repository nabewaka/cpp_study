#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string weather;
    cin >> weather;

    int max = 0;
    int temp = 0;

    for (int i = 0; i < N; i++)
    {
        if (weather[i] == 'S')
        {
            temp = 0;
        }
        else
        {
            temp++;
            
        }
        if (temp > max)
            {
                max = temp;
            }
    }


    cout << max << endl;
}
