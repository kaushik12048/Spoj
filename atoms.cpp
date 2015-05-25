#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long int t;
  scanf("%llu",&t);
  while(t--)
 {
   unsigned long long int a,b,c,t=0;
   scanf("%llu %llu %llu",&a,&b,&c);
   while((double)(a)<=(double)(c)){
   a=a*b;
   t++;}
   if(t==0)
   printf("0\n");
   else
   printf("%llu\n",t-1);
  }
  return 0;
}
