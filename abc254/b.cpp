#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> a(n);

  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      if(j==0 || j==i){
	a[i].push_back(1);
      } else{
	int add;
	add = a[i-1][j-1]+a[i-1][j];
	a[i].push_back(add);
      }      
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
