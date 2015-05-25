#include<bits/stdc++.h>
using namespace std;
int main(){
  
  long long int t,x,y,z;
  scanf("%lld",&t);
  while(t--){
  scanf("%lld %lld %lld",&x,&y,&z);
  long long int a,d,n,i;
  n=(z*2)/(x+y);
  d=(y-x)/(n-5);
  a=(x*(n-5))/(2*(y-x));
  printf("%lld\n",n);
  for(i=1;i<=n;i++)
   printf("%lld ",a+(i-1)*d);
  }
  return 0;
}
