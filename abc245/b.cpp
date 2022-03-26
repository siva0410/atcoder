#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];    
  }
  
  sort(a.begin(), a.end());

  bool b = false;
  int ans = 0;
  for(int i=0; i<n; i++){
    if(a[i] == ans){
      continue;
    }else if(a[i] == ans+1){
      ans++;
      continue;
    }else{
      if(a[0] != 0){
	cout << 0 << endl;
      }else{
	cout << ans+1 << endl;
      }
      return 0;
    }
  }
  if(a[0] != 0){
    cout << 0 << endl;
  }else{
    cout << ans+1 << endl;
  }
  return 0;
}
