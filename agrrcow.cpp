#include<bits/stdc++.h>
using namespace std;
unsigned long long int arr[100005];
int placed(int k,int p)
 {
   int s=arr[0];
   int i,count=1;
   for(i=1;i<p;i++)
   {
      if(arr[i]-s>=k)
      {  count++;
         s=arr[i];
       }
    }
   return count;
}
  int main()
 {
   unsigned long long int x;
   scanf("%llu",&x);
   while(x--!=0)
   {
     unsigned long long int t,c;
     scanf("%llu %llu",&t,&c);
     unsigned long long int i,j,ans=0;
     for(i=0;i<t;i++)
        scanf("%llu",&arr[i]);
     sort(arr,arr+t);
     unsigned long long int low=0;
     unsigned long long int high=arr[t-1]-arr[0];
     while(low<=high)
     {
       unsigned long long int mid=(low+high)/2;
       unsigned long long int num=placed(mid,t);
      // System.out.println(mid+" "+num);
       if(num<c)
           high=mid-1;
       else
          {
             low=mid+1;
             if(mid>ans) ans=mid;
           }
      }
     printf("%llu\n",ans);
     }
  return 0;

}
