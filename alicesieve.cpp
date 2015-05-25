#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,x;
  scanf("%lld",&t);
  while(t--){
  scanf("%lld",&x);
  if(x%2==1)
    printf("%lld\n",(x+1)/2);
  else
    printf("%lld\n",x/2);
    }
  return 0;
}
