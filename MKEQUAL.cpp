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
 long long int n;
 inp(n);
 long long int i,m=0,temp,sum=0;
 long long int arr[n];
 memset(arr,0,sizeof(arr));
 for(i=0;i<n;i++){
    inp(arr[i]);
    sum+=arr[i];
 }
 if(sum%n==0)
    m=n;
 else
    m=n-1;
 printf("%lld\n",m);
 }
 return 0;
}
   
