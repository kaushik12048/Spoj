#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int arr[MAX];
void compute(long long int arr[],long long int i)
{
  long long int a=2;
  while((i*a)<=MAX)
  {
    arr[i*a]=1;
    a++;
   }
}
void prefill()
{
  long long int i;
  memset(arr,0,sizeof(arr));
  arr[0]=1;
  arr[1]=1;
  for(i=2;i<MAX;i++)
     if(arr[i]==0)
       compute(arr,i);
}
int main()
{
  prefill();
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int a,i;
  scanf("%lld",&a);
  for(i=a+1;i<=MAX;i++)
     if(arr[i]==0)
     { printf("%lld\n",i);
       break;
     }
  }
  return 0;
}
