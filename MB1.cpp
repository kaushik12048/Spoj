#include<bits/stdc++.h>
using namespace std;
#define MAX 455000
long long int arr[MAX];
long long int mb[MAX];
long long int prime[MAX];
long long int s=0,x1=0;
void compute(long long int arr[],long long int j){
  long long int a=2;
  while((j*a)<=MAX){
   arr[j*a]=1;
   a++;
   }
}
bool palindrome(long long int x){
  long long int y=x,sum=0;
   while(y!=0){
   sum=sum*10+y%10;
   y/=10;
   }
  if(sum==x)
     return true;
  else
     return false;
}
long long int productofdigits(long long int x){
  long long int ans=1; 
  while(x!=0){
  if(x%10==0){
    x/=10;
    continue;
  }
  ans=ans*(x%10);
  x/=10;
  }
  return ans;
}
void prefill(){
  long long int i;
  s=x1=0;
  memset(arr,0,sizeof(arr));
  memset(mb,0,sizeof(mb));
  memset(prime,0,sizeof(prime));
  for(i=2;i<=MAX;i++){
   if(arr[i]==0){
   if(palindrome(i)==true)
      mb[s++]=i; 
   prime[x1++]=i;
   compute(arr,i); } }
}
int main()
{
  long long int i,t,x,ans,ans1;
  prefill();
  scanf("%lld",&t);
  mb[0]=2;
  while(t--){
  scanf("%lld",&x);
  ans=mb[x-1];
  i=productofdigits(ans);
  ans1=prime[i-1];
  printf("%lld %lld\n",ans,ans1);
  }

  return 0;
}
