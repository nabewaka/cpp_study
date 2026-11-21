#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> C(N);
    vector<int> same;
    int num_same = 1;
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
        if (i != 0)
        {
            if (C[i - 1] == C[i])
            {
                num_same++;
            }
            else
            {
                same.push_back(num_same);
                num_same = 1;
            }
            if (i == N - 1)
            {
                same.push_back(num_same);
            }
        }else if(N == 1){
            same.push_back(num_same);
        }
    }

    vector<int> same_c;

    for (int num : same)
    {
        int now_num = num;
        while (num > 0)
        {
            same_c.push_back(now_num);
            num--;
        }
    }

    vector<int> ans(N);
    for (int i = 0; i < same.front(); i++)
    {
        ans[i] = same.front() - i;
    }

    for (int i = 0; i < same.back(); i++)
    {
        ans[N - i - 1] = same.back() - i;
    }

    int start = same.front(); //今の連続部分の開始位置
    for (int i = same.front(); i < N - same.back(); i++)
    {
        if (C[i - 1] != C[i])
        {
            start = i; //新しい連続部分
        }
        int k = i - start;  // 連続部分の中で何番目か
        int L = same_c[i];  // 長さ
        ans[i] = min(k + 1, L - k);
    }

    for (int i = 0; i < N; i++)
    {
        if (i != N - 1)
        {
            cout << ans[i] << " ";
        }
        else
        {
            cout << ans[i] << endl;
        }
    }
}