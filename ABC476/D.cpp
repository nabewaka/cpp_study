#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N_de, M_dri, K;
    cin >> N_de >> M_dri >> K;

    double X;
    int Y;
    cin >> X >> Y;

    priority_queue<int, vector<int>, greater<int>> A_pq;
    priority_queue<int, vector<int>, greater<int>> B_pq;

    for (int i = 0; i < N_de; i++)
    {
        int temp;
        cin >> temp;

        A_pq.push(temp);
    }

    for (int i = 0; i < M_dri; i++)
    {
        int temp;
        cin >> temp;

        B_pq.push(temp);
    }

    // デザートの累積和
    vector<long long> A_sum(N_de + 1, 0);
    for (int i = 0; i < N_de; i++)
    {
        A_sum[i + 1] = A_sum[i] + A_pq.top();
        A_pq.pop();
    }

    int count = 0;
    int drink_count = 0;

    while (1)
    {
        // 今の手持ち(K*Y + X)で買えるデザートの最大個数
        long long money = K * Y + X;
        int dessert_count = upper_bound(A_sum.begin(), A_sum.end(), money) - A_sum.begin() - 1;

        count = max(count, drink_count + dessert_count);

        if (B_pq.empty())
        {
            break;
        }

        // 次に安いドリンクを K ドル紙幣だけで買う
        long long use_K = (B_pq.top() + K - 1) / K;
        if (Y < use_K)
        {
            break;
        }

        long long change_1 = use_K * K - B_pq.top();
        Y -= use_K;
        X += change_1;

        drink_count++;
        B_pq.pop();
    }
    
    cout << count << endl;
}
