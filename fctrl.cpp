#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int x,count=0;
  scanf("%lld",&x);
  while(x!=0){
  count+=x/5;
  x/=5; }
  printf("%lld\n",count);
  }
  return 0;
}
