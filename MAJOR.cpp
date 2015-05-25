#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int n;
  scanf("%lld",&n);
  long long int arr[n],i,count=1,temp,m=0,num=0;
  for(i=0;i<n;i++)
     scanf("%lld",&arr[i]);
  sort(arr,arr+n);
  temp=arr[0];
  for(i=1;i<n;i++){
    if(arr[i]==temp)
       count++;
    else{
       if(count>m){ m=count; num=arr[i-1];}
       count=1;
       temp=arr[i];
    }
  } 
  if(count>m){ m=count; num=arr[n-1]; }
  if(m>n/2)
     printf("YES %lld\n",num);
  else
     printf("NO\n",m);
  }
  return 0;
}
