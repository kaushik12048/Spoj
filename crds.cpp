#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int x,i,ans=0,prev=0;
  scanf("%lld",&x);
  prev=2;
  if(x==1){
    printf("2\n"); continue; }
  ans=prev+(5*(x-1))+(3*(x-1)*(x-2)/2);
  printf("%lld\n",ans%1000007);
  }
  return 0;
}
