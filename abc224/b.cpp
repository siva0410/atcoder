#include<bits/stdc++.h>

using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> A.at(i).at(j);
    }
  }

  int yes = true;
  for(int i1=0; i1<H; i1++){
    for(int i2=i1+1; i2<H; i2++){
      for(int j1=0; j1<W; j1++){
	for(int j2=j1+1; j2<W; j2++){
	  if(A.at(i1).at(j2)+A.at(i2).at(j1) - (A.at(i1).at(j1)+A.at(i2).at(j2)) < 0){
	    yes = false;
	  }
	}
      }
    }
  }
  if(yes){
    cout << "Yes" << '\n';
  } else{
    cout << "No" << '\n';
  }
  
  return 0;
}
