#include <bits/stdc++.h>
#include <cmath>

using namespace std;

const int INF = 1e9;

int main(){
  int n, W;
  cin >> n >> W;
  vector<long long> w(n), v(n);
  for(int i=0; i<n; i++){
    cin >> w[i] >> v[i];    
  }

  vector<vector<long long>> dp(n+1, vector<long long>(W+1, 0));
  for(int i=1; i<n+1; i++){
    for(int sum_w=0; sum_w<=W; sum_w++){
      if(sum_w >= w[i-1]){
	dp[i][sum_w] = max(dp[i][sum_w], dp[i-1][sum_w-w[i-1]]+v[i-1]);
      }
      dp[i][sum_w] = max(dp[i][sum_w], dp[i-1][sum_w]);      
    }
  }
  
  // for(int i=0; i<n+1; i++){
  //   for(int sum_w=0; sum_w<=W; sum_w++){
  //     cout << sum_w << ": " << dp[i][sum_w] << " ";
  //   }
  //   cout << '\n';
  // }
  
  cout << dp[n][W] << endl;
  
  return 0;
}
