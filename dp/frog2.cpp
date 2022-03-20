#include <bits/stdc++.h>
#include <cmath>

using namespace std;

const int INF = 1e9;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> h(n);  
  for(int i=0; i<n; i++){
    cin >> h[i];    
  }

  vector<int> dp(n, INF);
  dp[0] = 0;
  for(int i=1; i<n; i++){
    for(int j=1; j<k+1; j++){
      if(i-j >= 0){
	dp[i]  = min(dp[i], abs(h[i]-h[i-j])+dp[i-j]);
      }
    }
  }
  
  cout << dp[n-1] << endl;
  
  return 0;
}
