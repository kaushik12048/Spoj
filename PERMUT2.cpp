#include<bits/stdc++.h>
#define MAX 100001
int arr[MAX];
int hash[MAX];
using namespace std;
void inp(int &x)
{
register int c = getchar_unlocked();
x = 0;
for(;(c<48 || c>57);c = getchar_unlocked());
for(;c>47 && c<58;c = getchar_unlocked())
{
x = (x<<1) + (x<<3) + c - 48;
}
}
int main(){
  while(1){
  int t,i,j;
  scanf("%d",&t);
  if(t==0)
     break;
  int num=0,ans=0;
  memset(arr,0,sizeof(arr));
  memset(hash,0,sizeof(hash));
  for(i=1;i<=t;i++){
     inp(arr[i]);
     hash[arr[i]]=i;
   }
  int flag=0;
  for(i=1;i<=t;i++){
   if(arr[i]!=hash[i]){
    printf("not ambiguous\n");
    flag=1;
      break;
  }
  }
  if(flag==0)
    printf("ambiguous\n");
  }
  return 0;
}

