#include <bits/stdc++.h>
#include <cmath>

using namespace std;

const int INF = 1e9;

int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  for(int i=0; i<n; i++){
    cin >> h[i];    
  }

  vector<int> dp(n, INF);  
  for(int i=0; i<n; i++){
    if(i == 0){
      dp[0] = 0;
    } else if(i == 1){
      dp[i]  = abs(h[i]-h[i-1]);
    } else{
      dp[i]  = min(dp[i], abs(h[i]-h[i-1])+dp[i-1]);
      dp[i]  = min(dp[i], abs(h[i]-h[i-2])+dp[i-2]);
    } 
  }
  
  cout << dp[n-1] << endl;
  
  return 0;
}
