#include <bits/stdc++.h>
#include <tuple>
using namespace std;

int main(){
  long long n, k;
  cin >> n >> k;
  long long a, b;
  vector<tuple<long long, long long>> A(n);
  for(int i=0; i<n; i++){
    cin >> a >> b;
    A.at(i) = make_tuple(a,b);
  }
  
  sort(A.begin(), A.end());

  long long ans = 0;
  long long before = 0;
  for(int i=0; i<n; i++){
    if(k-get<0>(A.at(i)) >= 0){
      k += get<1>(A.at(i));
      before = get<0>(A.at(i));
    }
    else{
      // ans = before;
      break;
    }
  }
  ans += k;
  cout << ans << endl;
      
  return 0;
}
