#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<vector<int>> a_k(k);
  

  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    a_k[i%k].push_back(a);
  }

  for(int i=0; i<k; i++){
    sort(a_k[i].begin(), a_k[i].end());
  }

  for(int i=0; i<n; i++){
    a[i] = a_k[i%k][i/k];
  }
  
  bool ok = true;
  for(int i=0; i<n-1; i++){
    if(a[i]>a[i+1]){
      ok = false;
    }
  }
  
  if(ok){
    cout << "Yes" << endl;
  } else{
    cout << "No" <<endl;
  }
  
    
  return 0;
}
