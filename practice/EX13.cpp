#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec(N);
  int ave = 0;

  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    ave += vec.at(i);
  }

  // 平均
  ave /= N;

  for(int i = 0; i < N; i++){
    if(vec.at(i) > ave){
        vec.at(i) -= ave;
    }else{
        vec.at(i) = ave - vec.at(i);
    }
    cout << vec.at(i) << endl;
  } 

}
