#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int arr[MAX];
long long int temp[MAX];
long long int merge(long long int arr[],long long int temp[],long long int a,long long int b,long long int c){
 long long int l,r,j,c1=0,i;
 l=a;
 r=b;
 j=a;
 while(l<=b-1 && r<=c){
  if(arr[l]<=arr[r])
     temp[j++]=arr[l++];
  else
  {  c1+=b-l;
     temp[j++]=arr[r++];  
  }
  }
  while(l<=b-1) temp[j++]=arr[l++];
  while(r<=c) temp[j++]=arr[r++];
  for(i=a;i<j;i++)
     arr[i]=temp[i];
  return c1;
  }
long long int invcount(long long int arr[],long long int temp[],long long int a,long long int b){
long long int c=0,mid;
 if(a<b){
 mid=(a+b)/2;
 c+=invcount(arr,temp,a,mid);
 c+=invcount(arr,temp,mid+1,b);
 c+=merge(arr,temp,a,mid+1,b);}
 return c;
}

int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int n,i;
  memset(arr,0,sizeof(arr));
  scanf("%lld",&n);
  for(i=0;i<n;i++)
      scanf("%lld",&arr[i]);
  printf("%lld\n",invcount(arr,temp,0,n-1));
  }
  return 0;
}
