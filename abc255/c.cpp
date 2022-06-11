#include <algorithm>
#include <array>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
  long long x, a, d, n;
  cin >> x >> a >> d >> n; 
  long long an = a+d*(n-1);  
  
  if(d<0){
    swap(a, an);
    d *= -1;
  }

  if(x<=a){
    cout << a-x << endl;
    return 0;
  }
  if(x>=an){
    cout << x-an << endl;
    return 0;
  }

  long long left = 0, right = n-1, ans = 0;
  // while(left<=right){
  //   long long mid = (left+right)/2;
  //   // cout << left << " " << mid << " " << right << '\n';
  //   if(a+d*mid <= x && x <= a+d*(mid+1)){
  //     ans = min(x-(a+d*mid),a+d*(mid+1)-x);
  //     break; 
  //   }
  //   if(a+d*(mid+1) > x) right = mid-1;
  //   if(a+d*mid < x) left = mid+1;
  // }

  long long mid = (left+right)/2;
  while(right-left>1){
    mid = (left+right)/2;
    if(a+d*mid >= x) right = mid;
    else left = mid;
  }
  ans = min(x-(a+d*mid), a+d*(mid+1)-x);
  cout << ans << endl;
  return 0;
}
