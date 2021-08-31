#include <iostream>
#include <string>
using namespace std;

int main(){
  string input;
  string hello = "Hello,World!";
  cin >> input;
  if(input == hello)
    cout << "AC" << endl;
  else
    cout << "WA" << endl;
  return 0;
}
  
