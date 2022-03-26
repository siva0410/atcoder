#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
  int n, k;  
  cin >> n >> k;
  vector<int> a(n+1), b(n+1);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  for(int i=0; i<n; i++){
    cin >> b[i];
  }

  vector<bool> dp(n,false), ep(n,false);
  dp[0] = true;
  ep[0] = true;  
  for(int i=1; i<n; i++){
    if(dp[i-1]){
      if(abs(a[i]-a[i-1]) <= k){
	dp[i] = true;
      }
      if(abs(b[i]-a[i-1]) <= k){
	ep[i] = true;
      } 
    }
    
    if(ep[i-1]){
      if(abs(a[i]-b[i-1]) <= k){
	dp[i] = true;
      }
      if(abs(b[i]-b[i-1]) <= k){
	ep[i] = true;
      } 
    }
  }
  
  if(dp[n-1] || ep[n-1]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
