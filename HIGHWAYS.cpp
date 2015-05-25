#include<bits/stdc++.h>
using namespace std;
#define MAX 100002
bool visited[MAX+1];
int num=0;
vector<pair<int,int> > vec[MAX+1];
int distnce[MAX];
void dijkstra(int src,int dest,int dist[]){
    int i,j,u,v,w;
    memset(visited,false,sizeof(visited));
    for(i=0;i<=num;i++)
        dist[i]=INT_MAX;
    dist[src]=0;
    priority_queue<pair<int,int> > PQ;
    PQ.push(make_pair(0,src));
    while(PQ.size()){
    u=PQ.top().second;
    PQ.pop();
    if(dest==u)
      break;
    if(visited[u]==true)
      continue;
    for(i=0;i<vec[u].size();i++){
        v=vec[u][i].first;
        w=vec[u][i].second;
        if(visited[u]==false && dist[u]+w<dist[v]){
           dist[v]=dist[u]+w;
           PQ.push(make_pair(-dist[v],v));
        }
    }
    visited[u]=true;
    }
    if(dist[dest]==INT_MAX)
       printf("NONE\n");
    else
       printf("%d\n",dist[dest]);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int edge,src,dest,i,u,v,w;
    scanf("%d %d %d %d",&num,&edge,&src,&dest);  
    for(i=0;i<=num;i++)
       vec[i].clear();
    for(i=0;i<edge;i++){
       scanf("%d %d %d",&u,&v,&w);
       vec[u-1].push_back(make_pair(v-1,w));
       vec[v-1].push_back(make_pair(u-1,w));
    }
    dijkstra(src-1,dest-1,distnce);
    }   
    return 0;
}
