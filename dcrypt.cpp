#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  int key;
  scanf("%d",&key);
  string x;
  cin>>x;
  string y="";
  int i,s;
  for(i=0;i<x.length();i++){
  char c=x[i];
  if(c=='.')
   { y+=" ";
     continue;
   }
   if(key<=25){
    if((int)(c)>=65 && (int)(c)<=90)
     {s=((int)(c)-65+(key))%26;
     y+=(char)(s+65); }
    else
    {
     s=((int)(c)-97+(key))%26;
     y+=(char)(s+97); }
   }
  else
   { if((int)(c)>=65 && (int)(c)<=90)
     {s=((int)(c)-65+(key)%26)%26;
     y+=(char)(s+97); }
    else
    {
     s=((int)(c)-97+(key)%26)%26;
     y+=(char)(s+65); }
   }
    
   }
    cout<<y<<endl;
   }
}
 
