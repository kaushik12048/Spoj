#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int m,n;
 while(1){
 scanf("%lld",&m);
 if(m==0)
    break;
 long long int arr1[m],i,j,sum1=0,sum2=0,ans=0;
 memset(arr1,0,sizeof(arr1));
 for(i=0;i<m;i++)
    scanf("%lld",&arr1[i]);
 scanf("%lld",&n);
 long long int arr2[n];
 memset(arr2,0,sizeof(arr2));
 for(i=0;i<n;i++)
    scanf("%lld",&arr2[i]);
 i=0,j=0;
 while(i<m && j<n){
 if(arr1[i]==arr2[j]){
    ans+=arr1[i]+max(sum1,sum2);
    sum1=0;
    sum2=0;
    i++;
    j++;
    continue;
 }
 if(arr1[i]<arr2[j])
   sum1+=arr1[i++];
 else
   sum2+=arr2[j++];
 }
 while(i<m)
   sum1+=arr1[i++];
 while(j<n)
   sum2+=arr2[j++];
 ans+=max(sum1,sum2);
 printf("%lld\n",ans);  
 }
 return 0;
}
