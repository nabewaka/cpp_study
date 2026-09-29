#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    // xの位置の記録
    vector<int> xs;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'x')
        {
            xs.push_back(i);
        }
    }


    for (int k = 1; k <= N; k++)
    {
        int answer = 0;

        if(k - 1 < xs.size()){
            answer = xs[k - 1] + 1 ;
        }else{
            answer = N;
        }

        cout << answer << endl;
    }
}
