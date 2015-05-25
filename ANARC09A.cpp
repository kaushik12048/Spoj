#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int i,j=1;
   while(1){
   string k;
   cin>>k;
   if(k[0]=='-')
      break;
   stack<char> st;
   i=0;
   long long int c=0;
   while(i<k.length()){
     if(k[i]=='{' && k[i+1]=='}'){
         i+=2;
         continue;
      }
    if(st.size()!=0){ 
     if(k[i]=='}' && st.top()=='{'){
      st.pop();
      i+=1;
      continue; 
     }
    }
    st.push(k[i]);
    i+=1;
   }
    while(st.size()!=0 && st.size()!=1){ 
     if(st.top()=='{'){
      st.pop();
      if(st.top()=='{'){
      st.pop();
      c+=1;
      }
      else{
      st.pop();
      c+=2;
      }
    }
    else{
      st.pop();
      if(st.top()=='}'){
      st.pop();
      c+=1;
      }
      else{
      st.pop();
      c+=2;
      }
    }
   }
   long long int ans=st.size()+c;
   printf("%lld. %lld\n",j,ans);
   j++;
   }
   return 0;
}
