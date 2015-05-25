#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int x,y,z;
  scanf("%lld %lld %lld",&x,&y,&z);
  long long int arr[x],i,count=0;
  for(i=0;i<x;i++){
     scanf("%lld",&arr[i]);
     while(arr[i]-z>0)
     { arr[i]-=z;
       count++;
     }
  }
  if(count>=y)
  printf("YES\n");
  else
  printf("NO\n");
  }
 return 0;
}
