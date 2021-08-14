#include <bits/stdc++.h>
using namespace std;

struct Node {
  int child[2] = {0};
  int weigh = 0;
};

vector<Node> tree(100000);

int rec(Node t){
  int ans=0;
  if(t.child[0] + t.child[1] == 0)
    return t.weigh;
  if(t.child[0] != 0)
    ans += rec(tree.at(t.child[0]));
  if(t.child[1] != 0)
    ans += rec(tree.at(t.child[1]));

  return ans;
}

int main(){
  int n;
  cin >> n;
  // vector<Node> tree(n);
  int a, b, w;
  for(int i=0; i<n-1; i++){
    cin >> a >> b >> w;
    if(tree.at(a-1).child[0] != 0)
      tree.at(a-1).child[0] = b;
    else tree.at(a-1).child[1] = b;
    tree.at(a-1).weigh = w;
    cout << tree.at(a-1).child[0] << endl;
  }

  cout << rec(tree.at(0)) << endl;
  
  return 0;
}
  
