#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  long long x;
  string s;
  cin >> n >> x >> s;

  string t(s);
  reverse(t.begin(), t.end());

  int ignore_cnt = 0;
  stack<char> mod;
  for(int i=0; i<n; i++){
    if(t[i]=='U'){
      ignore_cnt++;
    }
    if(t[i]=='L'){
      if(ignore_cnt > 0){
	ignore_cnt--;
	continue;
      }
      mod.push('L');
    }
    if(t[i]=='R'){
      if(ignore_cnt > 0){
	ignore_cnt--;
	continue;
      }
      mod.push('R');
    }      
  }
  for(int i=0; i<ignore_cnt; i++){
    mod.push('U');
  }
  
  while(!mod.empty()){
    if(mod.top()=='U'){
      mod.pop();
      x = x/2;      
    }
    else if(mod.top()=='L'){
      mod.pop();
      x = x*2;
    }
    else if(mod.top()=='R'){
      mod.pop();
      x = x*2 + 1;
    }
  }

  cout << x << endl;
  return 0;
}
