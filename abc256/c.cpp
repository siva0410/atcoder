#include <bits/stdc++.h>
#include <tuple>
#include <vector>

using namespace std;

int main(){
  vector<int> h(3), w(3);
  for(int i=0; i<3; i++)
    cin >> h[i];
  for(int i=0; i<3; i++)
    cin >> w[i];

  vector<vector<tuple<int,int,int>>> low(3), col(3);
  for(int cnt=0; cnt<3; cnt++){
    for(int i=1; i<=h[cnt]; i++){
      for(int j=1; j<=h[cnt]; j++){
	int k = h[cnt]- (i+j);
	if(k>0){
	  low[cnt].push_back(make_tuple(i, j, k));
	}
      } 
    }
    for(int i=1; i<=w[cnt]; i++){
      for(int j=1; j<=w[cnt]; j++){
	int k = w[cnt]- (i+j);
	if(k>0){
	  col[cnt].push_back(make_tuple(i, j, k));
	}
      } 
    }    
  }

  vector<vector<tuple<int,int,int>>> low2(3);
  for(auto c1: col[0]){
    for(auto c2: col[1]){
      for(auto c3: col[2]){
	low2[0].push_back(make_tuple(get<0>(c1), get<0>(c2), get<0>(c3)));
	low2[1].push_back(make_tuple(get<1>(c1), get<1>(c2), get<1>(c3)));
	low2[2].push_back(make_tuple(get<2>(c1), get<2>(c2), get<2>(c3)));
      }
    }
  }

  int ans = 0;
  for(int i=0; i<low2[0].size(); i++){
    for(int j=0; j<low[0].size(); j++){
      if(low2[0][i] == low[0][j]){
	if(low2[1][i] == low[1][j]){
	  if(low2[2][i] == low[2][j]){
	    ans++;
	  }	
	}	
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}
