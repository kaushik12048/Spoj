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
vector<long long int> g;
vector<long long int> m;
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--)
  { 
    string k;
    getline(cin,k);
    g.clear();
    m.clear();
    long long int x,y,i,j,l=0,r=0;
    inp(x);
    inp(y);
    for(i=0;i<x;i++)
    {
       inp(j);
       g.push_back(j);
    }
    for(i=0;i<y;i++)
    {
      inp(j);
      m.push_back(j);
    }
    sort(g.begin(),g.end());
    sort(m.begin(),m.end());
    if(m[m.size()-1]<=g[g.size()-1])
      printf("Godzilla\n");
    else 
      printf("MechaGodzilla\n");
   }
  return 0;
}
