#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  vector<int> p(26);
  for(int i=0; i<26; i++){
    cin >> p.at(i);
  }

  for(int i=0; i<26; i++){
    cout << char(p.at(i)-1+'a');
  }
  
  cout << '\n';
  return 0;
}
