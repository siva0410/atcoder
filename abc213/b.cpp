#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a.at(i);
  }

  int max = -1;
  int max_i = -1;
  int booby = -1;
  int booby_i = -1;
  for(int i=0; i<n; i++){
    if(a.at(i) >= booby){
      booby = a.at(i);
      booby_i = i;
      if(a.at(i) >= max){
	booby_i = max_i;
	max_i = i;
	booby = max;
	max = a.at(i);
      }
    }
  }
    
  cout << booby_i+1 << endl;
  
  return 0;
}
	   
