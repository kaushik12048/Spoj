#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  string a1;
  char d;
  string s;
  scanf("%c\n",&d);
  getline(cin,s);
  long long int i,ans=0,op=0,op2=0,temp=0,temp1=0,s1,f;
  f=0;
  for(i=0;i<s.length();i++){
  s1=(long long int)s[i];
  if(s1==32)
     continue;
  if(s1>=48 && s1<=57){
   if(f==0){
    if(op==0)
     temp=temp*10+(s1-48);
    else
     temp1=temp1*10+(s1-48);
   }
   else
     temp=temp*10+(s1-48);
 // printf("%lld %lld %lld %lld %lld\n",ans,temp,temp1,op,op2);
   continue;
  }
  if(op==0){
  if(s1=='+')
     op=1;
  else if(s1=='*')
     op=2;
  else if(s1=='/')
     op=3;
  else if(s1=='-')
     op=4;
  else if(s1=='%')
     op=5;
  }
  else if(op!=0){
   if(s1=='+')
     op2=1;
  else if(s1=='*')
     op2=2;
  else if(s1=='/')
     op2=3;
  else if(s1=='-')
     op2=4;
  else if(s1=='%')
     op2=5;
  }
  if((op!=0 && f>0) ||(op!=0 && op2!=0)|| (op!=0 && s[i]=='=')){
  if(f==0){ 
  if(op==1)
    ans=temp+temp1;
  else if(op==2)
    ans=temp*temp1;
  else if(op==3)
    ans=temp/temp1;
  else if(op==4)
    ans=temp-temp1;
  else if(op==5)
    ans=temp%temp1;
  f++;
  temp=0;
  temp1=0;
  op=op2;
  }
  else{
  if(op==1)
    ans=temp+ans;
  else if(op==2)
    ans=temp*ans;
  else if(op==3)
    ans=ans/temp;
  else if(op==4)
    ans=ans-temp;
  else if(op==5)
    ans=ans%temp;
  temp=0;
  op=op2;
  op2=0;
  }
  }
 // printf("%lld %lld %lld %lld %lld\n",ans,temp,temp1,op,op2);
  } 
  
  printf("%lld\n",ans);
  }
  return 0;
}
