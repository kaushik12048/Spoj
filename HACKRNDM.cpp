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
  long long int t,k;
  inp(t);
  inp(k);
  long long int arr[t],i,j,count=0;
  for(i=0;i<t;i++)
     inp(arr[i]);
  i=0;
  j=1;
  sort(arr,arr+t);
  while(j<t){
  if(arr[j]-arr[i]==k){
      count++;
      j++;
      i++;
      continue;
  }
  if(arr[j]-arr[i]>k)
     i++;
  else
     j++;
  }
  printf("%lld\n",count);
  return 0;
}
  
  
