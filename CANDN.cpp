#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
bool visited[MAX+1];
int num=0;
vector<pair<int,int> > vec[MAX+1]; 
int dista[MAX],distb[MAX],distc[MAX];
void inp(int &x)
{
register int c = getchar_unlocked();
x = 0;
for(;(c<48 || c>57);c = getchar_unlocked());
for(;c>47 && c<58;c = getchar_unlocked())
{
x = (x<<1) + (x<<3) + c - 48;
}
} 
void dijkstra(int src,int dist[]){
    int i,j,u,v,w;
    memset(visited,0,sizeof(visited));
    for(i=0;i<=num;i++)
        dist[i]=INT_MAX;
    dist[src]=0;
    priority_queue<pair<int,int> > PQ;
    PQ.push(make_pair(0,src));
    while(PQ.size()){
    u=PQ.top().second;
    PQ.pop();
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
}
int main(){
    while(1){
    int t,a,b,c,d,e,i,u,v,w,ans=INT_MIN;
    scanf("%d %d %d %d %d",&num,&a,&b,&c,&d); 
    if(num==-1 && a==-1 && b==-1 && c==-1 && d==-1)
       break;
    for(i=0;i<=num;i++)
       vec[i].clear();
    for(i=0;i<d;i++){
       inp(u);
       inp(v);
       inp(w);
       vec[u].push_back(make_pair(v,w));
       vec[v].push_back(make_pair(u,w));
    }
    dijkstra(a,dista);
    dijkstra(b,distb);
    dijkstra(c,distc);
    for(i=1;i<=num;i++)
       if(dista[i]+distb[i]==dista[b] && dista[i]+distc[i]==dista[c]) 
            ans=max(ans,dista[i]);
    printf("%d %d %d\n",ans,distb[a]-ans,distc[a]-ans);
    }   
    return 0;
}
