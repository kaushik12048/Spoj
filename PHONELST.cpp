#include<bits/stdc++.h>
using namespace std;
vector<string> vec;
int main(){
 long long int t,i,j,x,flag;
 char temp[11];
 scanf("%lld",&t);
 while(t--){
 scanf("%lld\n",&x);
 vec.clear();
 for(i=0;i<x;i++){
    gets(temp);
    vec.push_back(temp);
 }
 sort(vec.begin(),vec.end());
 flag=0;
 for(i=0;i<vec.size()-1;i++){
   if(vec[i].compare(vec[i+1].substr(0,vec[i].length()))==0){
   goto terminate;
   }
 }
 printf("YES\n");
 continue;
 terminate:
    printf("NO\n");
 }
 return 0;
}
