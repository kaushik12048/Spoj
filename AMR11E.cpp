#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
long long int arr[MAX];
long long int s[MAX];
int c=0;
void compute(long long int arr[],long long int j){
  long long int a=2;
  while((j*a)<=MAX){
   arr[j*a]++;
   if(arr[j*a]==3)
       s[c++]=j*a;
   a++;
   }
}
void prefill(){
  long long int i;
  memset(arr,0,sizeof(arr));
  memset(s,0,sizeof(s));
  for(i=2;i<=MAX;i++){
   if(arr[i]==0){ 
   compute(arr,i); } }
}
int main(){
  prefill();
  sort(s,s+c);
  long long int t,x;
  s[0]=30;
  scanf("%lld",&t);
  while(t--){
  scanf("%lld",&x);
  printf("%lld\n",s[x-1]);
  }
  return 0;
}
