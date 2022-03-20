#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string t;
  cin >> n >> t;
  int x = 0;
  int y = 0;
  bool xt = true;
  bool xplus = true;
  bool yplus = true;
  for(char c: t){
    if(c == 'S'){
      if(xt){
	if(xplus){
	  x++;
	}else{
	  x--;
	}
      }else{
	if(yplus){
	  y++;
	}else{
	  y--;
	}
      }
    }
    if(c == 'R'){
      if(xplus and yplus){
	yplus = false;
	xt = false;
      }
      else if(xplus and !yplus){
	xplus = false;
	xt = true;
      }
      else if(!xplus and !yplus){
	yplus = true;
	xt = false;
      }
      else{
	xplus = true;
	xt = true;
      }
    }
  }

  cout << x << " " << y << endl;
  
  return 0;
}
