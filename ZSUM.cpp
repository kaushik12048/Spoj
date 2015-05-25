#include<bits/stdc++.h>
using namespace std;
#define m 10000007
long long int mod(long long int x,long long int y){
  long long int ans=1;
  long long int t=x;
   while(y>0)
   {
    if(y%2==1)
     ans=(ans*t)%m;
    y=y>>1;
    t=(t*t)%m;
   }
  return ans;
}
int main()
{
   while(1){
   long long int n,k,ans;
   scanf("%lld %lld",&n,&k);
   if(n==0 && k==0)
      break;
   ans=(mod(n,k)%m)+(mod(n,n)%m)+2*(mod(n-1,k)%m)+2*(mod(n-1,n-1)%m);
   printf("%lld\n",ans%m);
   }
   return 0;
}
