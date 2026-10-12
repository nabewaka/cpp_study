#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));

    for(int i = 0; i< H ; i++){
        for(int j = 0; j< W ; j++){
            cin >> A[i][j];
        }
    }

    vector<int> sum_h(H,0);
    vector<int> sum_w(W,0);

    for(int i = 0; i< H ; i++){
        for(int j = 0; j< W ; j++){
            sum_h[i] += A[i][j];
            sum_w[j] += A[i][j];
        }
    }

    vector<vector<int>> ans(H, vector<int>(W));

    for(int i = 0; i< H ; i++){
        for(int j = 0; j< W ; j++){
            ans[i][j] = sum_h[i] + sum_w[j] - A[i][j];
        }
    }

    for(int i = 0; i< H ; i++){
        for(int j = 0; j< W ; j++){
            if(j != W-1){
                cout << ans[i][j] << " " ;
            }else{
                cout << ans[i][j] << endl ;
            }
        }
    }

}
