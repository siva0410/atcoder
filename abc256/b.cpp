#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<bool> isexist(n,true);
  int p = 0;
  for(int i=0; i<n; i++){
    cin >> a[i];
    for(int j=0; j<=i; j++){
      if(i != j){
	a[j] += a[i];
      }
      if(a[j]>=4 && isexist[j]){
	p++;
	isexist[j] = false;
      }
    }
  }

  cout << p << endl;
  return 0;
}
