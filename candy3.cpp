#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long int t;
  scanf("%llu",&t);
  while(t--){
  unsigned long long int n,i,sum=0;
  scanf("%llu",&n);
  unsigned long long int arr[n];
  for(i=0;i<n;i++){
  scanf("%llu",&arr[i]);
  sum=(sum+arr[i])%n;
  }
  if(sum%n==0)
    printf("YES\n");
  else
    printf("NO\n");
  }
  return 0;
}
