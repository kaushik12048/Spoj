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
  long long int i,t,count=0,j,temp=0,s,a,b;
  inp(t);
  inp(a);
  b=a;
  temp=a;
  for(i=1;i<t;i++){
    inp(a);
    if(a>temp){
     if(a>count)
         count=a;
     else
         temp=a;
     }
  }
  if(b==temp)
      temp-=1;
  printf("%lld\n",temp);
  return 0;
}
  
