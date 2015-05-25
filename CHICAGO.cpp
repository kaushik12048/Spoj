#include<bits/stdc++.h>
using namespace std;
#define MAX 100002
bool visited[MAX+1];
int num=0;
vector<pair<int,int> > vec[MAX+1];
double distnce[MAX];
void dijkstra(int src,int dest,double dist[]){
    int i,j,u,v,w;
    memset(visited,false,sizeof(visited));
    for(i=0;i<=num;i++)
        dist[i]=0.0;
    dist[src]=100.0;
    priority_queue<pair<double,int> > PQ;
    PQ.push(make_pair(100.0,src));
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
        if(visited[u]==false && dist[u]*(w/100.0)>dist[v]){
           dist[v]=dist[u]*(w/100.0);
           PQ.push(make_pair(dist[v],v));
        }
    }
    visited[u]=true;
    }
    printf("%.6lf percent\n",dist[dest]);
}
int main(){
    int edge,s,dest,i,u,v,w;
    while(1){
    scanf("%d",&num);
    if(num==0)
       break;
    scanf("%d",&edge); 
    for(i=0;i<=num;i++)
       vec[i].clear();
    for(i=0;i<edge;i++){
       scanf("%d %d %d",&u,&v,&w);
       vec[u-1].push_back(make_pair(v-1,w));
       vec[v-1].push_back(make_pair(u-1,w));
    }
    dijkstra(0,num-1,distnce);
    }
    return 0;
}
