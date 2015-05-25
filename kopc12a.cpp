#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int > > k;
long long int n;
long long int cost(long long int x)
{
  long long int i,t=0;
  for(i=0;i<n;i++)
      t+=abs(k[i].first-k[x].first)*k[i].second;
  return t;
}
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--){
  k.clear();
  long long int i,ans=0,value=0,low=0,high,l,r;
  scanf("%lld",&n);
  long long int arr[n],val[n];
  for(i=0;i<n;i++)
     scanf("%lld",&arr[i]);
  for(i=0;i<n;i++)
     scanf("%lld",&val[i]);
  for(i=0;i<n;i++)
     k.push_back(make_pair(arr[i],val[i]));
  sort(k.begin(),k.end());
  high=n-1;
  while(high-low+1>3){
  l=(low*2+high)/3;
  r=(low+high*2)/3;
  if(cost(l)>cost(r))
     low=l;
  else
     high=r;
  }
  value=cost(low);
  for(i=low+1;i<=high;i++)
     value=min(value,cost(i));
  printf("%lld\n",value);
  }
  return 0;
}
