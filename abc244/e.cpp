#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<char> s(3), t(3);
  for(int i=0; i<3; i++){
    cin >> s[i];
  }
  for(int i=0; i<3; i++){
    cin >> t[i];
  }

  int match = 0;
  for(int i=0; i<3; i++){
    if(s[i] == t[i]){
      match++;
    }
  }

  bool yes = false;
  if(match == 3){
    yes = true;
  }
  else if(match == 1){
    yes = false;
  }
  else{
    yes = true;
  }
  if(yes){
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }
  
  return 0;
}
