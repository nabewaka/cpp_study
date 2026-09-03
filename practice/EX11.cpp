#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  bool flag = false;

  int result = A;
  // ここにプログラムを追記
  for(int i=0;i < N;i++){
    if(flag == true){
        break;
    }
    string op;
    int B;
    cin >> op >> B;

    if(op == "+"){
        result += B;
    }else if(op == "-"){
        result -= B;
    }else if(op == "*"){
        result *= B;
    }else if(op == "/"){
        if(B==0){
            cout << "error" << endl;
            flag = true;
            break;
        }
        result /= B;
    }
    cout << i+1 << ":" << result << endl;

  }
}
