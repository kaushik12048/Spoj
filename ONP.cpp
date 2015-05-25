#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int t,p=0;
 scanf("%lld",&t);
 while(t--){
 string k;
 cin>>k;
 stack<char> s;
 stack<char> tmp;
 char c,d;
 int l;
 string n="";
 long long int i;
 for(i=0;i<k.length();i++){
     c=k[i];
     l=(int)c;
     if(c=='(')
         s.push(c);
     else if(l>=97 && l<=122)
         n+=c;
     else if(c=='^')
         s.push(c);
     else if(c=='+' || c=='-'){
         if(s.size()!=0){
         while(s.top()=='*' || s.top()=='/' || s.top()=='^'){
             tmp.push(s.top());
             s.pop();
         }
         s.push(c);
         while(tmp.size()!=0){
              s.push(tmp.top());
              tmp.pop();
         }
         }
     }
     else if(c=='*' || c=='/'){
          if(s.size()!=0){
          while(1){ d=s.top(); if(d!='^') break; tmp.push(s.top());
             s.pop();
          }
          s.push(c);
          while(tmp.size()!=0){
              s.push(tmp.top());
              tmp.pop();
         }
         }
     }
     else if(c==')'){
          if(s.size()!=0){
          while(1){
             d=s.top();
             if(d=='(')
                 break;
              n+=s.top();
              s.pop();
          }
          s.pop();
     }
   }
  }
  cout<<n<<endl;
 }
  return 0;
}  
