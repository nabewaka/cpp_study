#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N ;

  vector<int> A;

  for(int i=0;i < N;i++){
    int a;
    cin >> a;

    A.push_back(a);
  }
  
  int sum = 0;
  for(int i=N/2;i < N;i++){
    sum += A.at(i);
  }

  cout << sum << endl;

}
