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
  long long int t,prev,ans=0;
  inp(t);
  inp(prev);
  t-=1;
  while(t--){
  long long int x;
  inp(x);
  ans+=max(prev,x);
  prev=x;
  }
  printf("%lld\n",ans);
  return 0;
}
