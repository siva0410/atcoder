#include <bits/stdc++.h>
using namespace std;

int main(){
  int teika = 206, n;
  cin >> n ;

  if (1.08*n < teika){
    cout << "Yay!" << endl;
  } else if (int(1.08*n) == teika){
    cout << "so-so" << endl;
  } else {
    cout << ":(" << endl;
  }
  return 0;
}
