#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> a; 
  for(int tmp=0; tmp<(1<<8); tmp++){
    bitset<8> b(tmp);
    int sum = 0;
    int start = 0, end = s.size();
    for(int i=0; i<(s.size()-1); i++){
      if(b.test(i)==1){
        

	  
	
}
