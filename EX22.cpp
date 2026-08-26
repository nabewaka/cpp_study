#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<tuple<int, int>> data;

  for(int i = 0; i < N; i++){
    int a,b;
    cin >> a >> b ;
    data.push_back(make_tuple(b,a));
  }

  sort(data.begin(), data.end());

  for(int i = 0; i < N; i++){
    int a,b;
    tie(b,a) = data.at(i);
    cout << a << " " << b << endl;
  }


}
