#include<bits/stdc++.h>
using namespace std;
unsigned long long int power(unsigned long long int x,unsigned long long int y){
 unsigned long long int ans=1;
 while(y!=0){
  if(y%2==1)
     ans*=x;
  y=y>>1;
  x*=x;
 }
 return ans;
}
int main(){
  unsigned long long int t,i;
  scanf("%llu",&t);
  if(t%2==1)
    printf("NIE\n");
  else{
   for(i=1;power(2,i)<=t;i++){
     if(power(2,i)==t){ printf("TAK\n");
        goto terminate; }
     }
     printf("NIE\n");
      }
  terminate:
  return 0;
}
