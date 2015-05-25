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
  long long int n;
  while(1){
  inp(n);
  if(n==0)
    break;
  else
    printf("%lld\n",5+4*(n-1)+3*n*(n-1)/2);
  }
  return 0;
}
