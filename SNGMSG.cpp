#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t;
 scanf("%lld",&t);
 while(t--){
 long long int l,i,j,c=0,k,flag=0;
 string s,key,n;
 cin>>key; 
 l=key.length();
 cin>>s;
 for(i=0;i<s.length();i++){
 k=(int)(key[c]-48);
 if(((int)(s[i]-97)-k)<0)
   n+=(char)(((int)(s[i]-97)-k)+123);
 else
   n+=(char)(((int)(s[i]-97)-k)+97);
 if(flag==0 && c!=l-1)
 c++;
 else if(flag==0 && c==l-1)
 flag=1;
 else if(flag==1 && c!=0)
 c--;
 else if(flag==1 && c==0)
 flag=0;
 }
 cout<<n<<endl;
 }
 return 0;
}

  
