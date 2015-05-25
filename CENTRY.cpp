#include<bits/stdc++.h>
using namespace std;
int main(){
 char v[]={'a','e','i','o','u'};
 char c[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
 long long int t;
 scanf("%lld",&t);
 while(t--){
 string n="";
 cin>>n;
 long long int arr[26],i,count;
 memset(arr,0,sizeof(arr));
 string ans="";
 for(i=0;i<n.length();i++){
 int s=(int)n[i]-97;
 arr[s]++;
 count=0;
 count=arr[s];
 if(s==0 || s==4 || s==8 || s==14 || s==20){
 if(count>1){
     count=(count-1)*5;
     if(s==0)
        ans+=c[count%21];
     else if(s==4)
        ans+=c[(count+1)%21];
     else if(s==8)
        ans+=c[(count+2)%21];
     else if(s==14)
        ans+=c[(count+3)%21];
     else if(s==20)
        ans+=c[(count+4)%21];
 }
 else{
     if(s==0)
        ans+=c[0];
     else if(s==4)
        ans+=c[1];
     else if(s==8)
        ans+=c[2];
     else if(s==14)
        ans+=c[3];
     else if(s==20)
        ans+=c[4];
     }
  continue;
  }
  else{
 if(count>1){
     count=(count-1)*21;
     if(s<4)
        ans+=v[(count+s-1)%5];
     else if(s<8)
        ans+=v[(count+s-2)%5];
     else if(s<14)
        ans+=v[(count+s-3)%5];
     else if(s<20)
        ans+=v[(count+s-4)%5];
     else
        ans+=v[(count+s-5)%5];
 }
 else{
    if(s<4)
        ans+=v[(s-1)%5];
     else if(s<8)
        ans+=v[(s-2)%5];
     else if(s<14)
        ans+=v[(s-3)%5];
     else if(s<20)
        ans+=v[(s-4)%5];
     else
        ans+=v[(s-5)%5];
     }
  }
  }
  cout<<ans<<endl;
  }
 return 0;
}
