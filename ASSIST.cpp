#include<bits/stdc++.h>
using namespace std;
#define MAX 33810
long long int arr[MAX];
long long int prime[MAX];
void compute(long long int arr[],long long int j){
  long long int a=2,x=1,l=1;
  while((j+l)<=MAX){
  if(arr[j+l]==0 && x!=j)
     x++;
  else if(arr[j+l]==0 && x==j){
    arr[j+l]=1;
    x=1;
  }
  l++;
   }
}
void prefill(){
  long long int i;
  long long int s=0;
  memset(prime,0,sizeof(prime));
  memset(arr,0,sizeof(arr));
  for(i=2;i<=MAX;i++){
   if(arr[i]==0){ 
   prime[s++]=i;
   compute(arr,i); 
    }
  }
}
int main()
{
  long long int t,i;
  prefill();
  //printf("%lld\n",prime[2999]);
  while(1){
  scanf("%lld",&t);
  if(t==0)
     break;
  printf("%lld\n",prime[t-1]);
  }
   return 0;
}
