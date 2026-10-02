#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    long long Px, Py, Qx, Qy, Rx, Ry, Sx, Sy;

    for (int i = 0; i < T; i++)
    {
        cin >> Px >> Py >> Qx >> Qy >> Rx >> Ry >> Sx >> Sy;

        // 直線1: y = a1*x + b1  (a1 = an1/d1, b1 = bn1/(2*d1))
        bool vertical1 = false;
        long long an1 = 0, bn1 = 0, d1 = 1;

        if (Py == Qy)
        {
            vertical1 = true;
        }
        else
        {
            d1 = Py - Qy;
            an1 = -(Px - Qx);
            bn1 = Px * Px - Qx * Qx + Py * Py - Qy * Qy;
        }

        // 直線2
        bool vertical2 = false;
        long long an2 = 0, bn2 = 0, d2 = 1;

        if (Ry == Sy)
        {
            vertical2 = true;
        }
        else
        {
            d2 = Ry - Sy;
            an2 = -(Rx - Sx);
            bn2 = Rx * Rx - Sx * Sx + Ry * Ry - Sy * Sy;
        }

        // 両方縦線
        if (vertical1 && vertical2)
        {
            if (Px + Qx == Rx + Sx)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            continue;
        }

        
        if (vertical1 || vertical2)
        {
            cout << "Yes" << endl;
            continue;
        }

        // 両方縦線でない
        bool sameA = ((long long)an1 * d2 == (long long)an2 * d1); // a1 == a2
        bool sameB = ((__int128)bn1 * d2 == (__int128)bn2 * d1); // b1 == b2

        if (sameA)
        {
            if (sameB)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}