#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,o=1;
  scanf("%lld",&t);
  while(t--){
  long long int m,n;
  scanf("%lld %lld",&m,&n);
  long long int arr[m][n],i,j,flag=1,flag1=1,flag2=1,s,count;
  long long int ar[n];
  memset(arr,0,sizeof(arr));
  memset(ar,0,sizeof(ar));
  for(i=0;i<m;i++){
   s=0;
   count=0;
   for(j=0;j<n;j++){
   scanf("%lld",&arr[i][j]);
   if(arr[i][j]==1)
    {s=1;
     count++;
     ar[j]=1;
    }
   }
   if(s==0)
     flag1=0;
   if(count>=n)
     flag2=0;
   }
   for(i=0;i<n;i++){
    if(ar[i]==0)
     { flag=0; break; }
   }
   //printf("%lld %lld %lld\n",flag,flag1,flag2);
   long long int ans=flag*100+flag1*10+flag2,f=0;
   i=0;
   while(ans!=0){
   if(ans%2==1) f+=pow(2,i);
   i++;
   ans/=10;
   }
   printf("Case %lld: %lld\n",o,f);
   o++;
   }
   return 0;
}
     
