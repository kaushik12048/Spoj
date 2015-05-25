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
 long long int n,i,sum=0,count=0,tmp=0,temp;
 inp(n);
 map<long long int,long long int > m;
 m[0]=1;
 for(i=0;i<n;i++){
   scanf("%lld",&temp);
   sum+=temp;
   count+=m[sum-47];
   m[sum]++;
  }
 printf("%lld\n",count); 
 }
 return 0;
}
 
