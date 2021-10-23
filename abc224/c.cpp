#include<bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  cin >> n;
  vector<pair<long long, long long>> x(n);
  for(long long i=0; i<n; i++){
    cin >> x.at(i).first >> x.at(i).second;
  }

  long long ans = 0;
  long long vx1, vx2, vy1, vy2, vx0, vy0;  
  for(long long i=0; i<n; i++){
    for(long long j=i+1; j<n; j++){
      for(long long k=j+1; k<n; k++){
	if(x.at(i).second < x.at(j).second){
	  if(x.at(i).second < x.at(k).second){
	    vx0 = x.at(i).first;
	    vy0 = x.at(i).second;
	    vx1 = x.at(j).first - x.at(i).first;
	    vx2 = x.at(k).first - x.at(i).first;
	    vy1 = x.at(j).second - x.at(i).second;
	    vy2 = x.at(k).second - x.at(i).second;
	  } else if(x.at(j).second < x.at(k).second){
	    vx0 = x.at(j).first;
	    vy0 = x.at(j).second;
	    vx1 = x.at(i).first - x.at(j).first;
	    vx2 = x.at(k).first - x.at(j).first;
	    vy1 = x.at(i).second - x.at(j).second;
	    vy2 = x.at(k).second - x.at(j).second;
	  } else{
	    vx0 = x.at(k).first;
	    vy0 = x.at(k).second;
	    vx1 = x.at(i).first - x.at(k).first;
	    vx2 = x.at(j).first - x.at(k).first;
	    vy1 = x.at(i).second - x.at(k).second;
	    vy2 = x.at(j).second - x.at(k).second;
	  }
	}
	long long s = abs(vx1*vy2 - vx2*vy1);
	long long x1, x2, y1, y2;
	if(vy0 > 0){
	  ans++;
	} else if((vy1-vy0) > 0 && (vy2-vy0) > 0){
	  x1 = (-1)*vy0*(long long)(vx1/vy1);
	  x2 = (-1)*vy0*(long long)(vx2/vy2);
	  y1 = x1*(long long)(vy1/vx1);
	  y2 = x2*(long long)(vy2/vx2);
	  if(abs(x1*y2 - x2*y1)*2 < s){
	    ans++;
	  }
	} else if((vy1-vy0)*(vy2-vy0) < 0){
	  if(vy1 > vy2){
	    x1 = (-1)*vy0*(long long)(vx1/vy1);
	    x2 = (-1)*vy0*(long long)((vx2-vx1)/(vy2-vy1));
	    y1 = x1*(long long)(vy1/vx1);
	    y2 = x2*(long long)((vy2-vy1)/(vx2-vx1));
	    if(abs(x1*y2 - x2*y1)*2 < s){
	      ans++;
	    }
	  } else{
	    x1 = (-1)*vy0*(long long)(vx2/vy2);
	    x2 = (-1)*vy0*(long long)((vx2-vx1)/(vy2-vy1));
	    y1 = x1*(long long)(vy2/vx2);
	    y2 = x2*(long long)((vy2-vy1)/(vx2-vx1));
	    if(abs(x1*y2 - x2*y1)*2 < s){
	      ans++;
	    }
	  }
	}
      }
    }
  }
  cout << ans << endl;		  
  return 0;
}
