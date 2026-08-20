#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int max_p, min_p ;

  max_p = max(max(A,B),C);
  min_p = min(min(A,B),C);

  cout << max_p - min_p << endl;

}
