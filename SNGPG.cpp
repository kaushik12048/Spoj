#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int arr[MAX];
void compute(long long int arr[],long long int j){
  long long int a=2;
  while((j*a)<=MAX){
   arr[j*a]=1;
   a++;
   }
}
void prefill(){
  long long int i;
  memset(arr,0,sizeof(arr));
  for(i=2;i<=MAX;i++){
   if(arr[i]==0)
   compute(arr,i);
  }
}
int main()
{
  long long int t;
 // prefill();
  scanf("%lld",&t);
  while(t--){
  long long int x,y,count=0,i;
  scanf("%lld %lld",&x,&y);
  if(x>=4)
    printf("0\n");
  else if(y>=4)
    printf("%lld\n",x-4);
  else
    printf("%lld\n",y-x+1);
  }
  return 0;
}
