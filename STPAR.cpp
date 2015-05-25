#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
  long long int t,i,j,f;
  scanf("%lld",&t);
  if(t==0)
     break;
  stack<long long int> st;
  queue<long long int> que;
  for(i=0;i<t;i++){
  scanf("%lld",&j);
  que.push(j);
  }
  i=1;
  while(que.size()!=0 || st.size()!=0){
  if(que.size()==0 && st.top()!=i)
     break;
  if(st.size()!=0)
     if(st.top()==i){
     i++;
     st.pop();
     continue;
     }
  if(que.front()==i){
     i++;
     que.pop();
     continue;
  }

  f=que.front();
  que.pop();
  st.push(f);
  
  }
  if(i-1==t)
     printf("yes\n");
  else
     printf("no\n");
  }
 return 0;
}
 
