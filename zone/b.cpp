#include <bits/stdc++.h>
using namespace std;

int main(){
  double N, D, H;
  cin >> N >> D >> H;
  vector<double> D_vec(N), H_vec(N);
  for(int i=0; i<N; i++){
    cin >> D_vec.at(i) >> H_vec.at(i);
  }

  double ans=-1.0;
  double min_a = H/D;
  int temp = -1;
  for(int i=0; i<N; i++){
    if(min_a>(H-H_vec.at(i))/(D-D_vec.at(i))){
      temp = i;
      min_a = (H-H_vec.at(i))/(D-D_vec.at(i));
    }
  }
  if(temp>=0){
    ans = H_vec.at(temp) - min_a*D_vec.at(temp);
  } else {
    ans = 0;
  }
  cout << ans << endl;
    
  return 0;
}
