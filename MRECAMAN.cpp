#include<bits/stdc++.h>
using namespace std;
#define MAX 500001
long long int x[MAX];
long long int hash[9000000];
void precompute(){
  memset(x,0,sizeof(x));
  memset(hash,0,sizeof(hash));
  long long int i,f,j,s=0;
  x[0]=0;
  hash[0]=1;
  for(i=1;i<MAX;i++){
  f=0;
  j=0;
  x[i]=x[i-1]-i;
  if(x[i]<=0)
     f=1;
  else if(hash[x[i]]==1)
     f=1;
  if(f==1)
     x[i]=x[i-1]+i;
  hash[x[i]]=1;
}
}
int main(){
 precompute();
 while(1){
 long long int t;
 scanf("%lld",&t);
 if(t==-1)
   break;
 printf("%lld\n",x[t]);
 }
 return 0;
}
