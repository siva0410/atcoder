#include <bits/stdc++.h>

using namespace std;

int ans = 0;

int main(){
  int n;
  int x, y;
  cin >> n;
  cin >> x >> y;
  vector<pair<int, int>> box(n);
  int x_sum=0, y_sum=0;
  for(int i=0; i<n; i++){
    cin >> box.at(i).first >> box.at(i).second;
    x_sum += box.at(i).first;
    y_sum += box.at(i).second;
  }
  if(x_sum < x || y_sum < y){
    cout << -1 << endl;
    return 0;
  }

  int dp[n][x][y] = {INT_MAX};
  for(int i=0; i<n; i++){
    int box_xi = box.at(i).first;
    int box_yi = box.at(i).second; 
    for(int j=0; j<x; j++){
      for(int k=0; k<y; k++){
	if(i == 0){
	  dp[i][0][0] = 0;
	} else{
	  dp[i][min(j+box_xi,x)][min(k+box_yi,y)] = min(dp[i][min(j+box_xi,x)][min(k+box_yi,y)],dp[i-1][j][k]+1);
	  // dp[i][j][k] = min(dp[i-1][j][k],dp[i][j][k]);
	}
      }
    }
  }
  
  cout << dp[n][x][y] << endl;
  
  return 0;
}
