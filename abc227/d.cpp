#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> A(n);
  for(int i=0; i<n; i++){
    cin >> A.at(i);
  }
  sort(A.begin(), A.end(), greater<int>());
  
  vector<int> stage(k);
  int cnt = 0;
  for(int k_i=0; k_i<k; k_i++){
    stage.at(k_i) = A.at(k_i);
    cnt++;
  }
  
  int ans = 0;
  bool loop = true;
  while(loop){
    int min = INT_MAX;
    for(int k_i=0; k_i<k; k_i++){      
      if(min>stage.at(k_i)){
	min = stage.at(k_i);
      }
    }
    
    ans+=min;
    
    for(int k_i=0; k_i<k; k_i++){
      stage.at(k_i) -= min;
      if(stage.at(k_i) == 0){
	if(cnt == n){
	  loop = false;
	  break;
	}	    
	stage.at(k_i) = A.at(cnt);
	cnt++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
