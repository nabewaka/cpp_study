#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    char next;

    if(c == 'B'){
        next = 'Y';
    }else if(c == 'Y'){
        next = 'R';
    }else if(c == 'R'){
        next = 'B';
    }

    cout << next << endl;

}
