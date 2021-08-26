#include <bits/stdc++.h>

using namespace std;

int main(){
  int  h, w, n;
  cin >> h >> w >> n;
  vector<tuple<int,int,int>> a(n);
  int tmp1, tmp2;
  
  for(int i=0; i<n; i++){
    cin >> tmp1 >> tmp2;
    a.at(i) = make_tuple(tmp1, tmp2, i+1);
  }

  int  diff = 0;
  int  sum_diff = 0;
  
  sort(a.begin(), a.end());
  auto before_tuple = make_tuple(0, 0, 0);
  
  int a1, a2, a3;
  
  for(int i=0; i<n; i++){
    tie(a1, a2, a3) = a.at(i);
    diff = get<0>(a.at(i)) - get<0>(before_tuple) -1;
    if(diff >= 0){
      sum_diff += diff;
    }
    a1 -= sum_diff;
    before_tuple = a.at(i);
    a.at(i) = make_tuple(a1, a2, a3);
  }

  for(int i=0; i<n; i++){
    tie(a1, a2, a3) = a.at(i);
    swap(a1, a2);
    a.at(i) = make_tuple(a1, a2, a3);
  }
  
  sort(a.begin(), a.end());
  before_tuple = make_tuple(0, 0, 0);
  sum_diff = 0;
  
  for(int i=0; i<n; i++){
    tie(a1, a2, a3) = a.at(i);
    diff = get<0>(a.at(i)) - get<0>(before_tuple) -1;
    if(diff >= 0){
      sum_diff += diff;
    }
    a1 -= sum_diff;
    before_tuple = a.at(i);
    a.at(i) = make_tuple(a1, a2, a3);
  }
  
  for(int i=0; i<n; i++){
    tie(a1, a2, a3) = a.at(i);
    swap(a1, a3);
    a.at(i) = make_tuple(a1, a2, a3);
  }
  
  sort(a.begin(), a.end());

  for(int i=0; i<n; i++){
    cout << get<1>(a.at(i)) << " " << get<2>(a.at(i)) << endl;
  }

  return 0;
}
