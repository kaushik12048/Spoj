#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int i,sum=0,f;
  float ans=1,j,s;
  scanf("%f",&s);
  f=s;
  while((s--)>1)
  ans+=(float)(f/s);
  printf("%.2f\n",ans);
 }
  return 0;
}
