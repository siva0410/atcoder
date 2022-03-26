#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
  int n, m;  
  cin >> n >> m;
  vector<int> a(n+1,0), b(n+m+1,0), c(n+m+1,0);
  for(int i=0; i<n+1; i++){
    cin >> a[i];
  }
  for(int i=0; i<n+m+1; i++){
    cin >> c[i];
  }

  for(int bi=m; bi>=0; bi--){
    b[bi] = c[bi+n]/a[n];
    for(int ai=n-1; ai>=0; ai--){
      c[ai+bi] -= a[ai]*b[bi];
    }
  }

  for(int i=0; i<m+1; i++){
    cout << b[i] << " ";
  }
  cout << endl;
  
  return 0;
}
