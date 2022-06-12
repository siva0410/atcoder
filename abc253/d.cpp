#include <bits/stdc++.h>

using namespace std;

int gcd(long long a, long long b){
  if(a%b == 0){
    return b;
  } else{
    return gcd(b, a%b);
  }
}

int main(){
  long long n, a, b;
  cin >> n >> a >> b;
  if(a<b){
    swap(a, b);
  }

  long long an = int(n/a), bn = n/b;
  long long ab = a/gcd(a, b) * b;
  long long abn = n/ab;

  long long ans = 0;
  long long nsum = n*(n+1)/2;
  ans += nsum;
  long long asum = a*an*(an+1)/2;
  ans -= asum;
  long long bsum = b*bn*(bn+1)/2;
  ans -= bsum;
  long long absum = ab*abn*(abn+1)/2;
  ans += absum;

  cout << ans << endl;
  
  return 0;
}
