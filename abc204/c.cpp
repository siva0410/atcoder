#include <bits/stdc++.h>
using namespace std;

set<pair<int,int>> s;

void rec(pair<int,int> x){
  pair<int,int> tmp;
  if(s.find(x) != s.end())
    return;
  s.insert(x);
  for(auto rec_s: s){
    if(x.second == rec_s.first){
      tmp = make_pair(x.first, rec_s.second);
      rec(tmp);
    }
  }
  }
  
int main(){
  int n, m;
  int ans = 0;
  cin >> n >> m;
  vector<pair<int,int>> A(n);

  for(int i=0; i<n; i++)
    s.insert(make_pair(i+1,i+1));
  
  int a, b;
  for(int i=0; i<m; i++){
    cin >> a >> b;
    A.at(i) = make_pair(a,b);
    rec(A.at(i));
  }

  for(int i=0; i<m; i++){
    rec(A.at(i));
  }
  
  for(auto a: s) cout << a.first << " " << a.second << endl;
  cout << s.size() << endl;
  return 0;
}
  
