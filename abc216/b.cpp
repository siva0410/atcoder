#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<string, string>> S(n);
  for(int i=0; i<n; i++){
    cin >> S.at(i).first >> S.at(i).second;
  }
  sort(S.begin(), S.end());
  bool flag = false;
  for(int i=0; i<n-1; i++){
    if(S.at(i).first == S.at(i+1).first){
      if(S.at(i).second == S.at(i+1).second){
	flag = true;
      }
    }
  }
  if(flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
  return 0;
}
    
  
