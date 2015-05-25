#include<bits/stdc++.h>
using namespace std;
long long int i,m,n;
long long int arr[50001];
long long int candies(long long int mid,long long int people)
{
  long long int s=0;
  for(i=0;i<m;i++)
     s+=arr[i]/mid;
  if(people-s<=0)
     return true;
  return false;
} 
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int low=0,high=INT_MIN,mid;
  scanf("%lld %lld",&m,&n);
  memset(arr,0,sizeof(arr));
  for(i=0;i<m;i++)
  { scanf("%lld",&arr[i]);
    high=max(arr[i],high);
  }
  while(low<high)
  {  mid=low+(high-low+1)/2;
     if(candies(mid,n)==true)
        low=mid;
     else
        high=mid-1;
   }
   printf("%lld\n",low);
  } 
  return 0;
}
