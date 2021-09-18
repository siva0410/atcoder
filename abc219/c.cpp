#include <bits/stdc++.h>

using namespace std;

int main(){
  string X;
  int n;
  // vector<string> S(n);
  string S;
  cin >> X >> n;
  map<char, char> mp, mp2;
  for(int i=0; i<26; i++){
    mp['a'+i] = X.at(i);
    mp2[X.at(i)] = 'a'+i;
  }

  vector<string> T(n);
  for(int i=0; i<n; i++){
    cin >> S;
    for(auto& s: S){
      T.at(i).push_back(mp2[s]);
    }
  }
  
  vector<string> ans(n);  
  sort(T.begin(), T.end());
  for(int i=0; i<n; i++){
    for(auto& t: T.at(i)){
      ans.at(i).push_back(mp[t]);
    }
  }
  
  for(int i=0; i<n; i++)
    cout << ans.at(i) << endl;
  
  return 0;
}
