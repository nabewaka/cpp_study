#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, V;
    cin >> N >> V;

    vector<int> W(N);

    for(int i = 0; i < N; i++){
        cin >> W[i];
    }

    vector<int> mask(N - 3, 0);
    mask.insert(mask.end(), 3, 1);

    int max_num = 0;
    do{
        int temp_cost = 0;
        int temp_num = 0;
        
        for(int i = 0; i < N; i++){
            if(mask[i] == 1){
                temp_cost += i+1;
                temp_num += W[i];
            }
        }

        if(temp_cost <= V && temp_num > max_num){
            max_num = temp_num;
        }
    }while(next_permutation(mask.begin(), mask.end()));

    cout << max_num << endl;

}
