#include <bits/stdc++.h>

using namespace std;

void dfs(const vector<vector<int>> &graph, vector<bool> &seen, int v){
  seen[v] = true;
  for(auto next_v: graph[v]){
    if(seen[next_v]){
      continue;
    }
    cout << v+1 << " ";
    dfs(graph, seen, next_v);    
  }
  cout << v+1 << " ";
}

int main(){
  int n, a, b;
  cin >> n;
  vector<vector<int>> graph(n);
  vector<bool> seen(n,false);
  
  for(int i=0; i<n-1; i++){
    cin >> a >> b;
    graph.at(a-1).push_back(b-1);
    graph.at(b-1).push_back(a-1);
  }
  
  for(int i=0; i<n; i++){
    sort(graph.at(i).begin(), graph.at(i).end());
  }
  
  dfs(graph, seen, 0);
  cout << endl;
  return 0;
}
