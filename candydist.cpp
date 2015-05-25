#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(1){
  long long int t,i,cost=0;
  scanf("%lld",&t);
  long long int arr[t],val[t];
  if(t==0)
     break;
  for(i=0;i<t;i++)
     scanf("%lld",&arr[i]);
  for(i=0;i<t;i++)
     scanf("%lld",&val[i]);
   sort(arr,arr+t);
   sort(val,val+t);
  for(i=0;i<t;i++)
   cost+=arr[i]*val[t-i-1];
  printf("%lld\n",cost);
  }
  return 0;
}

