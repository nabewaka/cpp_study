#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }


    vector<int> sorted_A = A;
    sort(sorted_A.begin(), sorted_A.end());
    

    int st = -1, end = -1;

    for(int i = 0; i < N; i++){
        if(A[i] != sorted_A[i]){
            if(st == -1){
                st = i;
            }
            if(end == -1 || end < i){
                end = i;
            }
        }
    }

    if(st ==-1 || (st >= 0  && end <= st + K - 1)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}
