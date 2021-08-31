#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

struct UnionFind {
  vector<int> par, siz;
  
  UnionFind(int n): par(n, -1), siz(n, 1) { }
  
  int root(int x){
    if(par[x] == -1) return x;
    else return par[x] = root(par[x]);
  }

  bool issame(int x, int y){
    return root(x) == root(y);
  }

  bool unite(int x, int y){
    x = root(x);
    y = root(y);
    if(x == y) return false;
    if(siz[x] < siz[y]) swap(x, y);
    par[y] = x;
    siz[x] += siz[y];
    return true;
  }

  int size(int x){
    return siz[root(x)];
  }
};


int main(){
  int n;
  cin >> n;
  vector<tuple<int, int, int>> edges;
  int u, v, w;
  
  for(int i=0; i<n-1; i++){
    cin >> u >> v >> w;
    u--;
    v--;
    edges.push_back(make_tuple(w, u, v));
  }

  sort(edges.begin(), edges.end());

  UnionFind uf(n);
  long long ans = 0;
  
  for(auto edge: edges){
    tie(w, u, v) = edge;
    ans += 1LL * w * uf.size(u) * uf.size(v);
    uf.unite(u, v);
  }

  cout << ans << endl;

  return 0;
}
