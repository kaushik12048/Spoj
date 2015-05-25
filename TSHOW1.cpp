#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int x,term=2,sum=0;
  scanf("%lld",&x);
  string s="";
  while(x>0){
     if(((x)%term)<=term/2 && (x)%term!=0)
     s="5"+s;
     else
     s="6"+s;
     x-=term;
     term*=2;
  }
  cout<<s<<endl;
  }
  return 0;
}
