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
  inp(n);
  while(n--){
  long long int t,i,count=0;
  inp(t);
  char x[4];
  for(i=0;i<t;i++){
    gets(x);
    if(strcmp(x,"lxh")==0)
       count++;
  }
  if(count%2==0)
    printf("hhb\n");
  else
    printf("lxh\n");
  }
  return 0;
}
