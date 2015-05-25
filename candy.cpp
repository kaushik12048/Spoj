#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
   while(1){
   scanf("%lld",&n);
   if(n==-1)
     break;
   long long int arr[n],i,sum=0,avg,count=0;
   for(i=0;i<n;i++){
   scanf("%lld",&arr[i]);
   sum+=arr[i];
   }
   if(sum%n==0){
   avg=sum/n;
   for(i=0;i<n;i++){
   while(arr[i]>avg){
    arr[i]--;
    count++;
    }  
    }
       printf("%lld\n",count);
   }
   else
       printf("-1\n");
   }
   return 0;
}
   
