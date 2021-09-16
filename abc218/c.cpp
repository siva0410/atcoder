#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<char>> S, T;
  bool isempty = true;
  vector<char> tmp(n);
      
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> tmp.at(j);
      if(tmp.at(j) == '#')
	isempty = false;
      }
    if(!isempty){
      vector<char> s;
      int start = find(tmp.begin(), tmp.end(), '#') - tmp.begin();
      int end = find(tmp.rbegin(), tmp.rend(), '#') - tmp.rbegin();
      end = tmp.size() - end;
      cout << start << " " << end << endl;
      for(int j=start; j<end; j++){
	s.push_back(tmp.at(j));
      }
      S.push_back(s);
    }
  }
  
  isempty = true;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> tmp.at(j);
      if(tmp.at(j) == '#')
	isempty = false;
    }
    if(!isempty){
      vector<char> t;      
      auto start = find(tmp.begin(), tmp.end(), '#');
      auto end = find(tmp.rbegin(), tmp.rend(), '#');
      for(int j=*start; j<(*end - *start); j++){
	t.push_back(tmp.at(j));
      }
      T.push_back(t);
    }
  }

  for(auto s: S){
    for(auto si: s){
      cout << si;
    }
    cout << '\n';
  }
  for(auto t: T){
    for(auto ti: t){
      cout << ti << " ";
    }
    cout << '\n';
  }
      
      
  
  
  return 0;
}
