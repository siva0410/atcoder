#include <bits/stdc++.h>
#include <cmath>

using namespace std;

const int INF = 1e9;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);  
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i] >> c[i];    
  }

  vector<vector<int>> dp(n+1, vector<int>(3, 0));
  for(int i=1; i<n+1; i++){
    dp[i][0] = a[i-1]+max(dp[i-1][1], dp[i-1][2]);
    dp[i][1] = b[i-1]+max(dp[i-1][0], dp[i-1][2]);
    dp[i][2] = c[i-1]+max(dp[i-1][0], dp[i-1][1]);
  }
  
  cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
  
  return 0;
}
