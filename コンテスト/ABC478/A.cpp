#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> ans(N , 0);
    int point = 0;
    for(int i = 0; i < M; i++){
        ans[point++]++;
        if(point == N){
            point = 0;
        }
    }

    for(int i = 0; i < N; i++){
        cout << ans[i] << endl;
    }
}
