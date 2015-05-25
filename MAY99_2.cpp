#include<bits/stdc++.h>
using namespace std;
int main(){
  unsigned long long int t;
  scanf("%llu",&t);
  while(t--){
  unsigned long long int x;
  scanf("%llu",&x);
  string s="";
  unsigned long long int term=5,ans=x;
  while(x>0){
  if(x%term==0)
    s="u"+s;
  else if(x%term<=term/5)
    s="m"+s;
  else if(x%term<=(term*2/5))
    s="a"+s;
  else if(x%term<=(term*3/5))
    s="n"+s;
  else if(x%term<=(term*4/5))
    s="k"+s;
  else
    s="u"+s;
  x-=term;
  if(x>=ans)
     break;
  ans=min(ans,x);
  term=term*5;
  }
  cout<<s<<endl;
  }
  return 0;
}
  
  
  
