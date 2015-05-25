#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int arr[MAX];
void inp(long long int &x)
{
register long long int c = getchar_unlocked();
x = 0;
for(;(c<48 || c>57);c = getchar_unlocked());
for(;c>47 && c<58;c = getchar_unlocked())
{
x = (x<<1) + (x<<3) + c - 48;
}
}
long long int cut(long long int mid,long long int n,long long int m){
  long long int i,sum=0;
  for(i=0;i<n;i++){
  if(arr[i]>mid)
     sum+=arr[i]-mid;
  if(sum>=m)
     return true;
  }
     return false;
}

int main(){
  long long int n,m,i,low=0,high=INT_MIN,mid,ans;
  scanf("%lld %lld",&n,&m);
  memset(arr,0,sizeof(arr));
  for(i=0;i<n;i++){
    inp(arr[i]);
    high=max(high,arr[i]);
  }
  while(low<=high){
  mid=low+(high-low+1)/2;
  if(cut(mid,n,m)==true){
     low=mid+1;
     ans=mid;
  }
  else high=mid-1;
  }
  printf("%lld\n",ans);
  return 0;
}
