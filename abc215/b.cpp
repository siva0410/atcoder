#include <iostream>

using namespace std;

int main(){
  long long n;
  cin >> n;
  int ans = 0;
  while((n/=2) != 0){
    ans++;
  }
  cout << ans << endl;
  return 0;
}
  
