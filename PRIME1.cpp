#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
long long int arr[MAX];
long long int s[MAX];
long long int j=0;
void compute(long long int arr[],long long int i,long long int x){
  long long int a=2;
  while((j*a)<=x){
   arr[j*a]=1;
   a++;
   }
}
void prefill(long long int x){
  long long int i;
  memset(arr,0,sizeof(arr));
  for(i=2;i<=x;i++){ s[j++]=i;
   if(arr[i]==0){ 
   compute(arr,i,x); } }
}
int main()
{
  long long int t,i;
  scanf("%lld",&t);
  while(t--){
  long long int a,b,c,d,e,i;
  scanf("%lld %lld",&a,&b);
  prefill((int)(sqrt(b)));
  long long int ans[b-a+1];
  memset(ans,0,sizeof(ans));
  if(a==0)
   { ans[0]=1;
     ans[1]=1; }
  if(a==1) ans[0]=1;
  for(i=0;i<j;i++){
  c=s[i];
  d=a/c;
  d=d*c;
  while(d<a)
    d+=c;
  if(d==s[i])
    d+=c;
  
  for(e=d;e<=b;e+=c){ ans[e-a]=1; }
  }
   for(i=0;i<=(b-a);i++) { 
     if(ans[i]==0) printf("%lld\n",(a+i)); }
   printf("\n");
  }
  return 0;
}
