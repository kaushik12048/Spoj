#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int i,n;
  map<string,long long int> m;
  map<string,long long int>::iterator it;
  scanf("%lld\n",&n);
  char s[100];
  for(i=0;i<n;i++){
  gets(s);
  m[s]++;
  }
  for(it=m.begin();it!=m.end();it++)
   printf("%s %lld\n",it->first.c_str(),it->second);
  cout<<endl;
  }
  return 0;
}
