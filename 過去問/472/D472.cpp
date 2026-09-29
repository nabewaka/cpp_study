#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q, V;
    cin >> Q >> V;

    priority_queue<int64_t> vattery;

    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;

        if(type == 1){
            int time, energy;
            cin >> time >> energy;

            vattery.push(energy - time);
        }else{
            int time;
            cin >> time;

            if(vattery.empty()){
                cout << -1 << endl;
                continue;
            }

            int64_t max_energy = time + vattery.top();
            if(max_energy > V){
                max_energy = V;
            }

            cout << max_energy << endl;
            vattery.pop(); 
        }
    }

}
