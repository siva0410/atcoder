#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;

  vector<vector<int>> dp(n, vector<int>(11,0));
  for(int i=0; i<n; i++){
    for(int j=1; j<10; j++){
      dp[0][j] = 1;
    }
  }

  for(int i=1; i<n; i++){
    for(int j=1; j<10; j++){
      for(int k=j-1; k<=j+1; k++){
	dp[i][j] += dp[i-1][k];
	dp[i][j] %= 998244353;
      }
    }
  }
  
  long long ans = 0;  
  for(int i=1; i<10; i++){
    ans += (long long)dp[n-1][i];
    ans %= 998244353;
  }
  
  cout << ans << endl;
  
  return 0;
}
