#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n);  
  for(int i=0; i<n; i++){
    cin >> a.at(i);
  }
  for(int i=0; i<n; i++){
    cin >> b.at(i);
  }

  int ans1 = 0, ans2 = 0;
  for(int i=0; i<n; i++){
    if(a.at(i) == b.at(i)){
      ans1++;
    }
    for(int j=0; j<n; j++){
      if(a.at(i) == b.at(j)){
	ans2++;
      }	
    }
  }
  
  cout << ans1 << '\n' << ans2-ans1 << endl;
  
  return 0;
}
