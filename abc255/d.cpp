#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, q;
  cin >> n >> q;
  vector<long long> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  
  vector<long long> isum(n);
  isum[0] = a[0];
  for(int i=1; i<n; i++){
    isum[i] = a[i]+isum[i-1];
  }    
  
  for(int i=0; i<q; i++){
    long long x;
    cin >> x;
    if(a[0]>=x){
      cout << isum[n-1]-x*n << '\n';
      continue;
    }
    if(a[n-1]<=x){
      cout << x*n-isum[n-1] << '\n';
      continue;
    }
    
    long long r=n-1, l=0;
    while(r-l>1){
      int mid = (r+l)/2;
      if(a[mid]>=x) r = mid;
      else l = mid;
    }
    long long ans = 0;
    ans = ((isum[n-1]-isum[l])-x*(n-(l+1))) + (x*(l+1)-isum[l]);
    cout << ans << '\n';
  }

  return 0;
}
