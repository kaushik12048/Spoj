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
int main()
{
  long long int t,i,arr=0,j;
  inp(t);
  for(i=0;i<t;i++)
  {
    inp(j);
    arr=arr^j;
  }
  printf("%lld\n",arr);
  return 0;
}
