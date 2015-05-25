#include<bits/stdc++.h>
using namespace std;
int main(){
  unsigned long long int t,count=0,temp;
  scanf("%llu",&t);
  while(t!=1){
  if(t==2 || t==3 || t==4 || t==5 || t==6 || t==8 || t==9 || t==0){
     printf("-1\n");
     goto terminate;
  }
  temp=0;
  while(t!=0){
    temp+=pow(t%10,2);
    t/=10;
  }
  count++;
  t=temp;
  }
  printf("%llu\n",count);
  terminate:
  return 0;
}
