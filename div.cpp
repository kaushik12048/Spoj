#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int arr[MAX],prime[MAX],s=0;
void compute(long long int arr[],long long int j){
  long long int a=2;
  while((j*a)<=MAX){
   arr[j*a]=arr[j*a]+1;
   a++;
   }
}
void prefill(){
  long long int i;
  memset(arr,0,sizeof(arr));
  memset(prime,0,sizeof(prime));
  for(i=2;i<=MAX;i++){
   if(arr[i]==0)
   prime[s++]=i;
   compute(arr,i); }
}
int main()
{
  long long int t,i,j,m,count=0,flag;
  prefill();
  prime[0]=2;
  for(i=1;i<=MAX;i++){
  t=arr[i]+2;
  //printf("%lld\n",t);
  flag=0;
  for(j=0;prime[j]<=t;j++){
   if(flag==1)
      break;
   for(m=j+1;prime[m]<=t;m++)
   { if(prime[j]*prime[m]==t)
      {  count++;
         flag=1;
        // printf("%lld\n",i);
         if(count==9){ printf("%lld\n",i); count=0; break;}
      }
    }
   }
  }  

  return 0;
}
