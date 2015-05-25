#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int x,t,j=1;
  scanf("%lld",&t);
  while(t--){
  scanf("%lld",&x);
  long long int arr[x],i,dp[x];
  memset(dp,0,sizeof(dp));
  memset(arr,0,sizeof(arr));
  for(i=0;i<x;i++)
     scanf("%lld",&arr[i]);
  if(x==0)
  {
    printf("Case %lld: 0\n",j);
    j++;
    continue;
  }
  for(i=0;i<x;i++){
   if(i==0)
   dp[i]=arr[0];
   else if(i==1)
   dp[i]=max(arr[i],dp[i-1]);
   else
   dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    } 
  printf("Case %lld: %lld\n",j,dp[x-1]);
  j++;
  }
  return 0;
}

