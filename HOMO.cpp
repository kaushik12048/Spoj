#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> m;
int main(){
 long long int t,dis=1,s1=1,temp;
 scanf("%lld",&t);
 m.clear();
 t-=1;
 string s;
 cin>>s;
 scanf("%lld",&temp);
 if(s.compare("insert")==0)
    m[temp]++;
 else{ dis=0; s1=1; }
 printf("neither\n");
 while(t--){
 cin>>s;
 scanf("%lld",&temp);
 if(s.compare("insert")==0){
 m[temp]++;
 if(m[temp]==2){
   s1++;
 }
 else if(m[temp]==1){
   dis++; 
  }
 }
 else{
 m[temp]--;
 if(m[temp]==1){
    s1--; 
 }
 else if(m[temp]==0){
    dis--;
  }
 
 }
 if(m[temp]<0)
   m[temp]=0;
 if(s1>=2 && dis>=2)
   printf("both\n");
 else if(s1>=2)
   printf("homo\n");
 else if(dis>=2)
   printf("hetero\n");
 else
   printf("neither\n");
 }
 return 0;
}

