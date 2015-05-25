#include<bits/stdc++.h>
using namespace std;
map<string,long long int> k;
map<string,long long int> k1;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int i,ans=0,c,d;
  k.clear();
  k1.clear();
  string a,b,ans1="";
  for(i=0;i<16;i++){
  cin>>a;
  cin>>b;
  scanf("%lld",&c);
  scanf("%lld",&d);
  if(c>d){
    k[a]++;
    k1[b]--;
    if(k[a]+k1[a]>ans){ ans1=a;
       ans=k[a]+k1[a];
    }
    }
  else{
    k[a]--;
    k1[b]++;
    if(k[b]+k1[b]>ans){ ans1=b;
       ans=k[b]+k1[b];
    }
    }
  }
  cout<<ans1<<endl;
  }
  return 0;
}
