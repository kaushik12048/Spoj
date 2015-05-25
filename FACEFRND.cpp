#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t,i,j;
  scanf("%lld",&t);
  j=t;
  set<long long int> s;
  set<long long int>::iterator it;
  s.clear();
  while(t--){
  long long int d,n;
  scanf("%lld %lld",&d,&n);
  s.insert(d); 
  for(i=0;i<n;i++){
     scanf("%lld",&d);
     s.insert(d);
  }
  }
  cout<<s.size()-j<<endl;
  return 0;
}
