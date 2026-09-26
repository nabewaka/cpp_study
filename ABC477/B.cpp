#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;
    cin >> N >> D;

    vector<pair<double, int>> X(N);

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        X[i] = {a, i + 1};
    }

    sort(X.begin(), X.end());
    priority_queue<int, vector<int>, greater<int>> ans;

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            if (abs(X[i].first - X[i + 1].first) >= D)
            {
                ans.push(X[i].second);
            }
        }
        else if (i == N - 1)
        {
            if (abs(X[i].first - X[i - 1].first) >= D)
            {
                ans.push(X[i].second);
            }
        }
        else
        {
            if (abs(X[i].first - X[i - 1].first) >= D && abs(X[i].first - X[i + 1].first) >= D)
            {
                ans.push(X[i].second);
            }
        }
    }

    if (!ans.empty())
    {
        int n = ans.size();
        cout << ans.size() << endl;

        for(int i = 0; i < n; i++){
            cout << ans.top();
            if(i == n-1){
                cout << endl;
            }else{
                cout << " ";
            }
            ans.pop();
        }
    }
    else
    {
        cout << "0" << endl;
        cout << endl;
    }
}
