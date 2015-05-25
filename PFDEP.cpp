#include<bits/stdc++.h>
using namespace std;
#define MAX 100
map<long long int,long long int> mp;
long long int arr[MAX][MAX];
long long int print[MAX];
bool visited[MAX];
void dfs(int v,int x){
  long long int i;
  for(i=0;i<=v;i++){
      if(visited[i]==false && arr[i][x]==1)
         mp[i]-=x;
      if(visited[i]==false && mp[i]==0){
         printf("%lld ",i+1);
         visited[i]=true;
         dfs(v,i);
      }
  }
}
int main(){
  long long int n,i,x,t,j,temp;
  int m;
  scanf("%d %lld",&m,&n);
  memset(arr,0,sizeof(arr));
  memset(print,0,sizeof(print));
  for(i=0;i<n;i++){
      scanf("%lld %lld",&x,&t);
      x-=1;
      mp[x]=0;
      for(j=0;j<t;j++){
          scanf("%lld",&temp);
          temp-=1;
          mp[x]+=temp;
          arr[x][temp]=1;
      }
  }
  memset(visited,false,sizeof(visited));
  dfs(m-1,0);
  printf("\n");
  return 0;
}
