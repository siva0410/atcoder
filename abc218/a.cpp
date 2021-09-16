#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  if(s.at(n-1) == 'o')
    cout << "Yes" << "\n";
  else
    cout << "No" << "\n";

  return 0;
}
