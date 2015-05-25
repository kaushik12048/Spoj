#include<bits/stdc++.h>
using namespace std;
void inp(long long int &x)
{
register long long int c = getchar_unlocked();
x = 0;
for(;(c<48 || c>57);c = getchar_unlocked());
for(;c>47 && c<58;c = getchar_unlocked())
{
x = (x<<1) + (x<<3) + c - 48;
}
}
vector< pair <long long int,long long int > > vec;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int n,i,a,b,count=1;
  vec.clear();
  inp(n);
  for(i=0;i<n;i++){
  inp(a);
  inp(b);
  vec.push_back(make_pair(b,a));
  }
  sort(vec.begin(),vec.end());
  long long int t1=vec[0].first;
  for(i=1;i<n;i++){
  if(t1<=vec[i].second){
  count++;
  t1=vec[i].first;
  }
  }
  printf("%lld\n",count);
  }
  return 0;
}
