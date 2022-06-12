#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  int h, w;
  cin >> h >> w;

  vector<int> ho, wo;
  for(int i=0; i<h; i++){
    string line;
    cin >> line;
    for(int j=0; j<w; j++){
      if(line[j] == 'o'){
	ho.push_back(i);
	wo.push_back(j);
      }
    }
  }
  cout << abs(ho[0]-ho[1])+abs(wo[0]-wo[1]) << endl;
  
  return 0;
}
