#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(1){
  long long int a,b,c;
  scanf("%lld %lld %lld",&a,&b,&c);
  if(a==0 && b==0 && c==0)
     break;
  string k;
  cin>>k;
  char arr1[k.length()];
  char arr2[k.length()];
  char arr3[k.length()];
  long long int cou[k.length()];
  memset(arr1,0,sizeof(arr1));
  memset(arr2,0,sizeof(arr2));
  memset(arr3,0,sizeof(arr3));
  memset(cou,0,sizeof(cou));
  long long int i,c1=0,c2=0,c3=0,j,f1=0,f2=0,f3=0;
  for(i=0;i<k.length();i++){
  j=(int)k[i];
  if(j>=97 && j<=105){
     arr1[c1++]=k[i];
     cou[i]=1; }
  else if(j>=106 && j<=114){
    arr2[c2++]=k[i];
    cou[i]=2; }
  else{
    arr3[c3++]=k[i];
    cou[i]=3; }
  }
  if(c1!=0)
  a%=c1;
  if(c2!=0)
  b%=c2;
  if(c3!=0)
  c%=c3;
  for(i=0;i<k.length();i++)
  {
     if(cou[i]==1){
     printf("%c",arr1[(c1-a+f1)%c1]);
     f1++; }
     else if(cou[i]==2){
     printf("%c",arr2[(c2-b+f2)%c2]);
     f2++; }
     else if(cou[i]==3){
     printf("%c",arr3[(c3-c+f3)%c3]);
     f3++; }
  }
  printf("\n");
  }
  return 0;
}
