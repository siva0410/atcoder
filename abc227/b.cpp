#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;

  int ans=0;
  for(int i=0; i<n; i++){
    int s;    
    cin >> s;

    bool exist = false;
    for(int a=1; a<1000; a++){
      for(int b=1; b<1000; b++){
	if(s == 4*a*b + 3*a + 3*b){
	  exist = true;
	}
      }
    }
    if(!exist){
      ans++;
    }
  }
  
  cout << ans << endl;  
  
  return 0;
}
