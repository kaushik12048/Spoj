#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int x,y,ans,c,d;
  while(1){
  scanf("%lld %lld",&x,&y);
  if(x==-1 && y==-1)
    break;
  else
  {
    c=min(x,y);
    d=max(x,y);
    ans=d/(c+1);
    if(d%(c+1)==0)
      printf("%lld\n",ans);
    else
      printf("%lld\n",ans+1);
  }
  }
  return 0;
}
