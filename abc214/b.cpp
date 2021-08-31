#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,t;
  cin >> s >> t;

  int a, b, c;
  int ans=0;
  for(a=0; a<s+1; a++){
    for(b=0; b<s+1-a; b++){
      for(c=0; c<s+1-a-b; c++){
	if (t >= a*b*c)
	  ans++;
      }
    }
  }
  
  cout << ans << endl;
  return 0;
}
  
