#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t,i=1;
  scanf("%lld",&t);
  while(t--){
  long long int x;
  float ans=0.0;
  scanf("%lld",&x);
  ans=0.25+4*(float(x*x));
  printf("Case %lld: %.2f\n",i,ans);
  i++;
  }
  return 0;
}
