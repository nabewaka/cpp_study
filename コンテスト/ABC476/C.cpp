#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> temp(N);

    for(int i = 0; i < N; i++){
        cin >> temp[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(temp[0]);
    pq.push(temp[1]);
    pq.push(temp[2]);

    if(N == 3){
        cout << pq.top() << endl;
        return 0;
    }

    for(int i = 3; i < N; i++){
        cout << pq.top() << endl;

        pq.push(temp[i]);
        pq.pop();

        if (i == N-1){
            cout << pq.top() << endl;
        }
    }
}
