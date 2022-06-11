#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(k), x(n), y(n);
  for(int i=0; i<k; i++){
    cin >> a[i];
  }
  
  for(int i=0; i<n; i++){
    cin >> x[i] >> y[i];
  }

  vector<long long> b(n,1e18);
  for(int i=0; i<n; i++){
    for(int j=0; j<k; j++){
      int ai = a[j]-1;
      long long dist = pow(x[ai]-x[i],2)+pow(y[ai]-y[i],2);
      b[i] = min(b[i], dist);
      if(i==ai) b[i] = 0;
      }    
  }

  long long ans = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<k; j++){
      if(i==a[j]-1) continue;
      ans = max(ans, b[i]);
    }
  }

  cout << sqrt(ans) << endl;
  
  return 0;
}
