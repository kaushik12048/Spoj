#include<bits/stdc++.h>
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
using namespace std;
int main(){
 long long int t;
 inp(t);
 while(t--){
 long long int i,ans=1000001,m,n,j,temp;
 inp(m);
 long long int ar[m];
 memset(ar,0,sizeof(ar));
 for(i=0;i<m;i++)
    inp(ar[i]);
 inp(n);
 long long int arr[n];
 memset(arr,0,sizeof(arr));
 for(i=0;i<n;i++)
    inp(arr[i]);
 sort(arr,arr+n);
 sort(ar,ar+m);
 long long int a=0,b=0,x,y;
 while(a<n && b<m){
  if(arr[a]==ar[b]){
     ans=0;
     break;
  }
  else if(arr[a]<ar[b]){
  ans=min(ans,abs(ar[b]-arr[a]));
   a++;
  }
  else{
  ans=min(ans,abs(ar[b]-arr[a]));
   b++;
  }
  x=arr[a];
  y=ar[b];
 }
 while(a<n)
   ans=min(ans,abs(y-arr[a++]));
 while(b<m)
   ans=min(ans,abs(x-ar[b++]));
 printf("%lld\n",ans);
 }
 return 0;
}
