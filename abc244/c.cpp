#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  vector<bool> used(2*n+1, false);
  cout << 1 << endl;
  used[1-1] = true;

  int t;
  while(cin >> t){
    if(t == 0){
      break;
    }
    used[t-1] = true;
    for(int i=0; i<2*n+1; i++){
      if(!used[i]){
	used[i] = true;
	cout << i+1 << endl;
	break;
      }
    }    
  }
  return 0;
}
