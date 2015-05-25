#include<bits/stdc++.h>
using namespace std;
static short dp[6101][6101];
int main()
{
  unsigned long long int t,x;
  scanf("%llu",&x);
  while(x--)
  {
    string k;
    cin>>k;
    memset(dp,0,sizeof(dp));
    t=k.length();
    int i,j,m;
    for(i=t-1;i>=0;i--)
      for(j=i+1;j<t;j++)
      {
        if(k[i]==k[j])
          dp[i][j]=dp[(i+1)][j-1];
        else
          dp[i][j]=min(dp[(i+1)][j],dp[i][j-1])+1;
      }
     printf("%d\n",dp[0][t-1]);
  }
  return 0;
}


