// http://www.geeksforgeeks.org/maximum-of-all-subarrays-of-size-k/
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
int main(){
  long long int t,i,k,j,ans;
  inp(t);
  long long int arr[t];
  memset(arr,0,sizeof(arr));
  for(i=0;i<t;i++)
     inp(arr[i]);
  inp(k);
  deque<long long int> s;
  for(i=0;i<k;i++){
  while(s.empty()==false && arr[i]>=arr[s.back()])
     s.pop_back();
   s.push_back(i);
  }
  for(j=i;j<t;j++){
   cout<<arr[s.front()]<<" ";
   while(s.empty()==false && s.front()<=j-k)
     s.pop_front();
   while(s.empty()==false && arr[j]>=arr[s.back()])
     s.pop_back();
   s.push_back(j);
  }
  cout<<arr[s.front()];
  return 0;
}

