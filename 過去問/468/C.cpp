#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> P(N), Q(N);

    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    for(int i = 0; i < N; i++){
        cin >> Q[i];
    }

    vector<int> a(N);
	iota(a.begin(), a.end(), 1);
    
    int answer = 0;
    do{
        if(a > P && a < Q){
            answer++;
        }
    }while(next_permutation(a.begin(), a.end()));

    cout << answer << endl;
}
