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

    int count = 0;
    while (1)
    {
        if (A_pq.empty())
        {
            if (B_pq.empty())
            {
                break;
            }

            if ((double)K * Y >= B_pq.top())
            {
                int use_K = 0;
                int change_1 = 0;

                use_K = B_pq.top() / K;
                Y -= use_K;

                change_1 = B_pq.top() % K;
                X += change_1;

                count++;
                B_pq.pop();
            }
            else
            {
                break;
            }
        }
        else if (B_pq.empty())
        {
            if ((double)K * Y + X < A_pq.top())
            {
                break;
            }
            else
            {
                int use_K = 0;
                int use_1 = 0;
                int change_1 = 0;
                if ((double)K * Y >= A_pq.top())
                {
                    if (A_pq.top() % K == 0)
                    {
                        use_K = A_pq.top() / K;
                    }
                    else
                    {
                        use_K = A_pq.top() / K + 1;
                        Y -= use_K;

                        change_1 = use_K * (K + 1) - A_pq.top();
                        X += change_1;
                    }
                }else{
                    if(K == 0){
                        if(X < A_pq.top()){
                            break;
                        }else{
                            X -= A_pq.top();
                        }
                    }else{
                        int temp =  A_pq.top() - K*Y;
                        Y = 0;

                        X -= temp;

                    }
                }
                count++; A_pq.pop();
            }
        }
        else if (B_pq.top() <= A_pq.top() && (double)K * Y >= B_pq.top())
        {
            int use_K = 0;
            int change_1 = 0;

            if (B_pq.top() % K == 0)
            {
                use_K = B_pq.top() / K;
            }
            else
            {
                use_K = B_pq.top() / K + 1;
                Y -= use_K;

                change_1 = use_K * (K + 1) - B_pq.top();
                X += change_1;
            }

            count++;
            B_pq.pop();
        }
        else
        {
            if ((double)K * Y + X < A_pq.top())
            {
                break;
            }
            else
            {
                int use_K = 0;
                int use_1 = 0;
                int change_1 = 0;
                if ((double)K * Y >= A_pq.top())
                {
                    if (A_pq.top() % K == 0)
                    {
                        use_K = A_pq.top() / K;
                    }
                    else
                    {
                        use_K = A_pq.top() / K + 1;
                        Y -= use_K;

                        change_1 = use_K * (K + 1) - A_pq.top();
                        X += change_1;
                    }
                }else{
                    if(K == 0){
                        if(X < A_pq.top()){
                            break;
                        }else{
                            X -= A_pq.top();
                        }
                    }else{
                        int temp =  A_pq.top() - K*Y;
                        Y = 0;

                        X -= temp;

                    }
                }
                count++; A_pq.pop();
            }
        }

    }
    cout << count << endl;
}
