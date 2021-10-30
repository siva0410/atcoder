#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<long long>> vv(n, vector<long long>(m));
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> vv.at(i).at(j);
    }
  }

  bool yes = true;
  for(int j=0; j<m; j++){
    for(int i=0; i<n-1; i++){
      if(vv.at(i).at(j)+7 != vv.at(i+1).at(j)){
	yes = false;
      }
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m-1; j++){
      if(vv.at(i).at(j)+1 != vv.at(i).at(j+1)){
	yes = false;
      } else if(vv.at(i).at(j)%7 == 0){
	yes = false;
      }
    }
  }   

  if(yes){
      cout << "Yes" << '\n';
  } else{
      cout << "No" << '\n';
  }
  
  return 0;
}
