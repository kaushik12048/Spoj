#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,i=1;
  scanf("%lld",&t);
  while(t--){
  long long int a,b,c,d;
  double ans,s;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
  s=(log(b)-log(a))/c;
  ans=(log(d)-log(a))/s;
  printf("Scenario #%lld: %.2lf\n",i,ans);
  i++;
  }
  return 0;
}
