#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n ;
  vector<int> a(n), b(n);
  for(int i=0; i<n; i++){
    cin >> a.at(i);
    b.at(i) = a.at(i);
  }

  int ans = 0;
  sort(b.begin(),b.end());
  
  int cnt = 0;
  bool f = false;

  for(int i=0; i<n-1; i++){
    if(b.at(i) == b.at(i+1)){
      cnt += 1;
      f = true;
    } else if(f){
      cnt += 1;
      f = false;
    }
  }
  if(f) cnt += 1;

  ans = n*(n-1)/2 - cnt;
	   
  cout << ans << endl;
  return 0;
}
