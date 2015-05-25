#include<bits/stdc++.h>
using namespace std;
vector<long long int>vec;
int main(){
 long long int t;
 scanf("%lld",&t);
 while(t--){
 long long int n,i,ans=0;
 scanf("%lld",&n);
 vec.clear();
 if(n%2==1){
 printf("%lld\n",n);
 continue;
 }
 while(n!=0){
 vec.push_back(n%2);
 n/=2;
 }
 n=0;
 for(i=vec.size()-1;i>=0;i--){
 if(vec[i]%2==1)
  ans+=pow(2,n);
 n++;
 }
 printf("%lld\n",ans);
 }
 return 0;
}
