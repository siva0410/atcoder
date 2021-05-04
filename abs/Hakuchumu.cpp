#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  vector<string> t = {"dream","dreamer", "erase", "eraser"};
  bool flag;
  
  for(int i=0; i<t.size(); i++){
    reverse(t.at(i).begin(),t.at(i).end());
  }
  reverse(S.begin(), S.end());
  
  for(int i=0; i<S.size();){
    flag = false;
    for(int j=0; j<t.size(); j++){
      if(S.substr(i, t.at(j).size()) == t.at(j)){
	flag = true;
	i += t.at(j).size();
      }
    }
    if(flag == false){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  
  return 0;
}
