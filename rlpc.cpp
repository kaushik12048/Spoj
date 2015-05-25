#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t,c=1;
  scanf("%lld",&t);
  while(t--){
  long long int n,i,sum=0,ans=0,k=0;
  scanf("%lld",&n);
  long long int arr[n];
  memset(arr,0,sizeof(arr));
  for(i=0;i<n;i++){
  scanf("%lld",&arr[i]);
  k+=arr[i];
  if(arr[i]<0){
    if(sum+arr[i]<=0){
     ans+=abs(arr[i])-sum+1;   
     sum=ans+k;
     continue;
    }
  }
  sum+=arr[i]; 
  }
  if(ans==0)
    ans=1;
  printf("Scenario #%lld: %lld\n",c,ans);
  c++;
  }
  return 0;
}
