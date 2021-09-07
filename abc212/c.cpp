#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for(int i=0; i<n; i++){
    cin >> a.at(i);
  }
  for(int i=0; i<m; i++){
    cin >> b.at(i);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 1<<30;
  for(int i=0; i<n; i++){
    int j = lower_bound(b.begin(), b.end(), a.at(i)) - b.begin();
    if(j < m)
      ans = min(abs(a.at(i)-b.at(j)), ans);
    if(j-1 >= 0)
      ans = min(abs(a.at(i)-b.at(j-1)), ans);
  }
  cout << ans << '\n';
  return 0;
}
