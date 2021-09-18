#include <bits/stdc++.h>

using namespace std;

int ans = 0;

bool func(int i, auto& box, int x, int y){
  if(i == 0) return true;
  if(x <= 0 && y <= 0){
    return true;
  } else{
    return false;
  }

  if(func(i-1, box, x, y)) return true;
  
  if(func(i-1, box, x-box.at(i).first, y-box.at(i).second)){
    ans++;
    return true;
  }

  return false;
}

int main(){
  int n;
  int x, y;
  cin >> n;
  cin >> x >> y;
  vector<pair<int, int>> box(n);
  int x_sum=0, y_sum=0;
  for(int i=0; i<n; i++){
    cin >> box.at(i).first >> box.at(i).second;
    x_sum += box.at(i).first;
    y_sum += box.at(i).second;
  }
  if(x_sum < x || y_sum < y){
    cout << -1 << endl;
    return 0;
  }
  sort(box.begin(), box.end());
  func(n, box, x, y);
  cout << ans << endl;
  
  return 0;
}
