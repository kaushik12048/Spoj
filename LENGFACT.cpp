#include<bits/stdc++.h>
using namespace std;
#define pie 3.14159265358979323
#define e 2.71828182845904523536 
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int x;
  scanf("%lld",&x);
  if(x<3)
     printf("1\n");
  else
     printf("%lld\n",(long long int)(ceil(log10(2*pie*x)/2 + x*log10(x/e))));
  }
  return 0;
}
