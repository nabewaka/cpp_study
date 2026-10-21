#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, T;
    cin >> N >> K >> T;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    while(A.size() && A.back() > T) a.pop_back();
    a.push_back(T);
    n = A.size();

    int ans = 0;
    int r = 0;
    for(int x : a){
        if(r < x){
            ans += (x-r + k-1)/k;
        }
        r = x+K;
    }
    cout << ans << endl;
}