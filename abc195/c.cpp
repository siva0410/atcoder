#include <bits/stdc++.h>
using namespace std;

long long cnt = 0;
int digit = 0;
string s;

void rec(int comma){
  string p, q;
  if(comma == 0)
    return;
  p = s.substr(0,digit-3*comma);
  q = s.substr(digit-3*comma, 3*comma);
  cnt += (stoll(q)+1)+(stoll(p)-1)*(long long)pow(10,3*comma);
  rec(comma-1);
}

int main(){
  int comma=0;
  cin >> s;
  digit = s.size();
  comma = (digit-1)/3;
  rec(comma);
  
  cout << cnt << endl;
  
  return 0;
}
