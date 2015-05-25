#include<bits/stdc++.h>
using namespace std;
static short dp[6101][6101];
int main()
{
  int i,j,l;
  string k;
  cin>>k;
  memset(dp,0,sizeof(dp));
// 1st way of doing it
  for(i=k.length()-1;i>=0;i--)
   for(j=i+1;j<k.length();j++)
   {
     if(k[i]==k[j])
       dp[i][j]=dp[i+1][j-1];
     else
       dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
   }
   printf("Minimum number of insertions=%d\n",dp[0][k.length()-1]);
// More optimized way of doing it
   memset(dp,0,sizeof(dp));
  for(i=k.length()-1;i>=0;i--)
   for(j=i+1;j<k.length();j++)
   {
     if(k[i]==k[j])
       dp[i%2][j]=dp[(i+1)%2][j-1];
     else
       dp[i%2][j]=min(dp[(i+1)%2][j],dp[i%2][j-1])+1;
   }
   printf("Minimum number of insertions=%d\n",dp[0][k.length()-1]);
// 2nd way of doing it
  memset(dp,0,sizeof(dp));
  for(i=1;i<k.length();i++)
   for(j=0,l=i;l<k.length();++j,++l)
   {
     if(k[l]==k[j])
       dp[j][l]=dp[j+1][l-1];
     else
       dp[j][l]=min(dp[j+1][l],dp[j][l-1])+1;
   }
   printf("Minimum number of insertions=%d\n",dp[0][k.length()-1]);
  return 0;
} 
