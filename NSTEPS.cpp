#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int x,y;
  scanf("%lld %lld",&x,&y);
  if(x==3 && y==1){
    printf("3\n"); continue;}
  if(x==2 && y==0){
    printf("2\n"); continue; }
  else if((x==0 && y==0) || (x==1 && y==1)){
    printf("%lld\n",x);
    continue;}
  else if(x==0 || y==0 || x==1 || y==1){
    printf("No Number\n"); continue;
    }
 
  else if(y%2==0 && x%2==0)
  { 
    if(y+2==x || x==y)
      printf("%lld\n",x+y);
    else
      printf("No Number\n");
   }
  else if(y%2==1 && x%2==1)
  { 
    if(y+2==x || x==y)
      printf("%lld\n",x+y-1);
    else
      printf("No Number\n");
   }
  else
    printf("No Number\n");
  }
  return 0;
}
