#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
  scanf("%lld",&n);
  while(n--){
  string s,t;
  cin>>s;
  cin>>t; 
  long long int x=0,y=0,temp=0,i,l;
  for(i=0;i<s.length();i++){
   l=(int)s[i];
   if(l>=48 && l<=57)
     temp=l-48;
   else if(l>=97 && l<=122){
    if(l==99){
     if(temp==0)
       x+=100;
     else 
       x+=100*(temp);
    }
    else if(l==109){
     if(temp==0)
       x+=1000;
     else 
       x+=1000*(temp);
    }
    else if(l==120){
     if(temp==0)
       x+=10;
     else 
       x+=10*(temp);
    }
   else if(l==105){
     if(temp==0)
       x+=1;
     else 
       x+=1*(temp);
    }
    temp=0;
   }
  }
   for(i=0;i<t.length();i++){
   l=(int)t[i];
   if(l>=48 && l<=57)
     temp=l-48;
   else if(l>=97 && l<=122){
    if(l==99){
     if(temp==0)
       y+=100;
     else 
       y+=100*(temp);
    }
    else if(l==109){
     if(temp==0)
       y+=1000;
     else 
       y+=1000*(temp);
    }
    else if(l==120){
     if(temp==0)
       y+=10;
     else 
       y+=10*(temp);
    }
   else if(l==105){
     if(temp==0)
       y+=1;
     else 
       y+=1*(temp);
    }
    temp=0;
   }
   }
   long long int sum=x+y;
   long long int a,b,c,d;
   a=sum/1000;
   sum-=a*1000;
   b=sum/100;
   sum-=b*100;
   c=sum/10;
   sum-=c*10;
   d=sum;
   string ans="";
   if(a>=1){ if(a==1) ans+="m"; else { ans+=(char)(a+48); ans+="m"; } }
   if(b>=1){ if(b==1) ans+="c"; else { ans+=(char)(b+48); ans+="c"; } }
   if(c>=1){ if(c==1) ans+="x"; else { ans+=(char)(c+48); ans+="x"; } }
   if(d>=1){ if(d==1) ans+="i"; else { ans+=(char)(d+48); ans+="i"; } }
   cout<<ans<<endl;
  } 
  return 0;
}
