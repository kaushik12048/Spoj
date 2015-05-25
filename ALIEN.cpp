#include<bits/stdc++.h>
using namespace std;
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
int main(){

  long long int t;
  inp(t);
  while(t--){ 
  long long int a,b,i,m=0,ans=0,j=0,count=0,l=0,k=0;
  long long int m1=INT_MAX; 
  inp(a);
  inp(b);
  long long int arr[a];
  memset(arr,0,sizeof(arr));
  for(i=0;i<a;i++){
    inp(arr[i]); 
    ans+=arr[i];
    count++;
    while(ans>b && j<=i){
    ans-=arr[j];
    j++;
    count--;
    }
    if(k<count || (k==count && l>ans)){ k=count;
    l=ans;
    }
    m1=min(m1,arr[i]);
  }
  if(k==1)
    l=m1;
  printf("%lld %lld\n",l,k);
  }
  return 0;
}
