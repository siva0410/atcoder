#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> A, int key){
  int left, right, mid;
  left = 0;
  right = A.size()-1;
  while(right >= left){
    mid = left + (right-left)/2;
    cout << left << " " << mid << " " << right << endl;
    if(A.at(mid) == key)
      return mid;
    else if(A.at(mid) > key)
      right = mid-1;
    else if(A.at(mid) < key)
      left = mid+1;
  }
  return -1;
}

int main(){
  int N = 35;
  vector<int> A(N);
  for(int i=0; i<N; i++){
    A.at(i) = i;
  }
  
  int key;
  cin >> key;
  cout << binary_search(A, key) << endl;
  
  return 0;
}
  
