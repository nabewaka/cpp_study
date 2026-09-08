#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    int64_t K;
    cin >> H >> W >> K;

    vector<string> S(H);

    for (int i = 0; i < H; i++)
    {
        cin >> S.at(i);
    }

    vector<bool> out_holizon(H, false);
    vector<bool> out_vertical(W, false);

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == '#')
            {
                out_holizon.at(i) = true;
                out_vertical.at(j) = true;
            }
        }
    }

    vector<vector<int>> safe;
    for (int i = 0; i < H; i++)
    {
        if(out_holizon.at(i) == true){
            continue;
        }
        for (int j = 0; j < W; j++)
        {
            if(out_vertical.at(j) == true){
            continue;
        }else{
            safe.push_back({i, j});
        }

        }
    }

    int64_t count = 0;
    for(int i = 0;i < safe.size();i++){

    }


}

int can_move(int64_t K, vector<string> S){
    
}
