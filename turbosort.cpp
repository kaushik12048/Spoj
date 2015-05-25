#include<bits/stdc++.h>
using namespace std;
long long int arr[1000001];
int main()
{
  long long int t,i,x;
  scanf("%lld",&t);
  memset(arr,0,sizeof(arr));
  for(i=0;i<t;i++)
  {
    scanf("%lld",&x);
    arr[x]++;
  }
  for(i=0;i<1000000;i++)
    if(arr[i])while(arr[i]) {printf("%llu\n",i); arr[i]--;}
  return 0;  
}
   
