#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n;
  scanf("%lld",&t);
  n=t;
  t=t+1;
 // printf("%lld %lld",n,t);
  while(t--){
    string k,s;
    if(t!=n)
    getline(cin,s);
    getline(cin,k);
    k+=" ";
    long long int i,j=0,count=0,a=0,b=0,c=0,index=0;
    for(i=0;i<k.length();i++)
    {
      if(k[i]=='+' || k[i]=='=')
        { i+=1; continue; }
      if(k[i]=='m')
      {
         if(a==0) index=1;
         else if(b==0) index=2;
         else index=3; continue; 
       }
      if((long long int)(k[i]-48)>=0 && (long long int)(k[i]-48)<=9)
         j=j*10+(long long int)(k[i]-48);
      else if(k[i]==' '){
         if(count==0)
           a=j;
         else if(count==1)
           b=j;
         else c=j;
         j=0;
         count++;
        } 
     }
     if(index==1)
       a=c-b;
     else if(index==2)
       b=c-a;
     else 
       c=a+b;
     if(t!=n)
     printf("%lld + %lld = %lld\n",a,b,c);
   }  
  return 0;
}
   
