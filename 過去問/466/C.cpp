#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans = 0;
    int i = 1;
    int j = 2;

    while( i <= N && j <= N){
        if(i == N && j == N){
            break;
        }
        cout << "? " << i << " " << j << endl;

        string resp;
        cin >> resp;

        if(resp == "Yes"){
            j++;
        }else{
            ans+= j - i - 1;
            i++;
            if(j <= i){
                j = i+1;
            }
        }
    }
        if(i != N && j-1 == N){
            ans += (j-i)*(j-i-1)/2;
        }

        cout << "! " << ans << endl;

}
