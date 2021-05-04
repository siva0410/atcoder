#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  deque<char> q;
  bool rev = false;
  
  for(char c: S){
    if(c == 'R') rev ^= 1;
    else if(rev) q.push_front(c);
    else q.push_back(c);
  }

  if(rev) reverse(q.begin(),q.end());

  string T = "";
  for(char c: q){
    if(!T.empty() && c == T.back()) T.pop_back();
    else T.push_back(c);
  }

  cout << T << endl;
    
  return 0;
}
