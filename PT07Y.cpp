#include<bits/stdc++.h>
using namespace std;
#define MAX 20001
bool visited[MAX];
vector<int> vec[MAX];
bool dfs(bool visit[],int src,int par){
  int i,j;
  visit[src]=true;
  for(i=0;i<vec[src].size();i++){
       if(visit[vec[src][i]]==false)
            dfs(visit,vec[src][i],src);
       else
            if(vec[src][i]!=par)
               return true;
  }
  return false;
}
int main(){
  int m,i,n,a,b;
  scanf("%d %d",&m,&n);
  for(i=0;i<n;i++){
      scanf("%d %d",&a,&b);
      vec[a-1].push_back(b-1);
      vec[b-1].push_back(a-1);
  }
  if(n!=m-1)
     printf("NO\n");
  else{
  for(i=0;i<m;i++)
     if(visited[i]==false && dfs(visited,i,-1)==true){
         printf("NO\n");
         goto terminate;
     }
     printf("YES\n");
  }
  terminate:
  return 0;
}

