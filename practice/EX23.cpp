#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);

  for(int i = 0;i < N; i++){
    cin >> A.at(i);
  }

  map<int, int> cnt;

  for(int a: A){
    if(cnt.count(a)){
        cnt.at(a)++;
    }else{
        cnt[a] = 1;
    }
  }

  int most_number = -1;
  int max_times = 0;

  for(int a: A){
    if(max_times < cnt.at(a)){
        max_times = cnt.at(a);
        most_number = a;
    }
  }

  cout << most_number << " " << max_times << endl;
}
