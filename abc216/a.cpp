#include <iostream>
#include <string>

using namespace std;

int main(){
  string str;
  cin >> str;
  string y = str.substr(str.size()-1, 1);
  string x = str.substr(0,str.size()-2);
  if(stoi(y)>=7)
    cout << x+'+' << endl;
  else if(stoi(y)>=3)
    cout << x << endl;
  else
    cout << x+'-' << endl;

  return 0;
}
    
  
