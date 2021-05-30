#include <bits/stdc++.h>
#include <tuple>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<vector<int>> a(vector<int>(n));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> a.at(i).at(j);
    }
  }

  vector<int> tmp(k*k);
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1; j++){
      for(int l=0; l<k; l++){
	for(int m=0; m<k; m++){
	tmp.at(i*l+m);
      }
    }
  }
  return 0;
}
