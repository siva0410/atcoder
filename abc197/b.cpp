#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  X = X-1;
  Y = Y-1;
  vector<string> S(H);
  for(int i=0; i<H; i++){
      cin >> S.at(i);
    }
  
  int cnt=0;
  int ans=0;
  bool flag = false;

  for(int i=0; i<H; i++){
    if(i == X)
      flag = true;
    if(S.at(i).at(Y) == '.') cnt += 1;
    if(S.at(i).at(Y) == '#' || i == H-1){
      if(flag){
	ans += cnt;
	flag = false;
      }
      cnt = 0;
    }
  }
  
  for(int i=0; i<W; i++){
    if(i == Y)
      flag = true;
    if(S.at(X).at(i) == '.') cnt += 1;
    if(S.at(X).at(i) == '#' || i == W-1){
      if(flag){
	ans += cnt;
	flag = false;
      }
      cnt = 0;
    }
  }

  cout << ans-1 << endl;

  return 0;
}
