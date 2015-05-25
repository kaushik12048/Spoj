#include<bits/stdc++.h>
using namespace std;
int main(){
 
  while(1){
  long long int a,b;
  double c=0.0;
  scanf("%lld %lld",&a,&b);
  if(a==0 && b==0)
    break;
  if(a>b)
    printf("%.6lf\n",c);
  else
    printf("%.6lf\n",(b-a+1.0)/(b+1.0));
  }
  return 0;
}
 
