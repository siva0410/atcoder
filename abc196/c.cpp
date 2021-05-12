#include <bits/stdc++.h>
using namespace std;
 
int64_t N;
int ans = 0;
void rec(int64_t num){
    string s;
    s = to_string(num) + to_string(num);
    if (N < stoll(s)) return; 
    ans += 1;
    rec(num+1);
}
 
int main(){
    cin >> N;
    rec(1);
    cout << ans << endl;
    return 0;
}
