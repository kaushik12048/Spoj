#include<bits/stdc++.h>
using namespace std;
map<string,long long int>m;
map<string,long long int>::iterator it;
vector<pair<string,string> > vec1;
vector<pair<long long int,long long int> > vec2;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int i,a1,b1;
  string t1,t2;
  m.clear();
  vec1.clear();
  vec2.clear();
  for(i=0;i<16;i++){
  cin>>t1;
  cin>>t2;
  scanf("%lld %lld",&a1,&b1);
  vec1.push_back(make_pair(t1,t2));
  vec2.push_back(make_pair(a1,b1));
  m[t1]++;
  m[t2]++;
  }
  it=m.begin();
  string x1="",x2="",x3="",x4="";
  long long int count=0;
  for(;it!=m.end();it++){
  if(m[it->first]==4)
  {  if(count==0)
     x1=it->first;
     else if(count==1)
     x2=it->first;
     else if(count==2)
     x3=it->first;
     else if(count==3)
     x4=it->first;
     count++;
  }
  }
 // cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
  int w=0,l=0;
  string ans="",ans2="",los="",los1="",a="",b="",n="",o="";
  for(i=0;i<vec1.size();i++){
    if((x1.compare(vec1[i].first)==0 && x2.compare(vec1[i].second)==0) || (x1.compare(vec1[i].second)==0 && x2.compare(vec1[i].first)==0)){
      if(x1.compare(vec1[i].first)==0 && x2.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second){
              ans=x1; los=x2; w=1; l=2;
          }
          else{
              ans=x2; los=x1; w=2; l=1;
          }
       }
      else{
        if(vec2[i].first>vec2[i].second)
           {   ans=x2; los=x1;  w=2; l=1; }
          else 
           {   ans=x1; los=x2; w=1; l=2; }
       }
    }
    else if((x1.compare(vec1[i].first)==0 && x3.compare(vec1[i].second)==0) || (x1.compare(vec1[i].second)==0 && x3.compare(vec1[i].first)==0)){    if(x1.compare(vec1[i].first)==0 && x3.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second)
            {  ans=x1; los=x3; w=1; l=3; }
          else
            {  ans=x3; los=x1; w=3; l=1;}
       }
      else{
        if(vec2[i].first>vec2[i].second)
           {   ans=x3; los=x1; w=3; l=1; }
          else
           {   ans=x1; los=x3; w=1; l=3; }
       }
    }
    else if((x1.compare(vec1[i].first)==0 && x4.compare(vec1[i].second)==0) || (x1.compare(vec1[i].second)==0 && x4.compare(vec1[i].first)==0)){ if(x1.compare(vec1[i].first)==0 && x4.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second)
            {  ans=x1; los=x4; w=1; l=4; }
          else
            {  ans=x4; los=x1; w=4; l=1; }
       }
      else{
        if(vec2[i].first>vec2[i].second)
            {  ans=x4; los=x1; w=1; l=4; }
          else
            {  ans=x1; los=x4; w=4; l=1; }
       }
    }
 }
    if(w==1){ if(l==2){  n=x3; o=x4; } else if(l==3){ n=x2; o=x4; } else if(l==4){n=x2; o=x3; } }
    else if(w==2){ n=x3; o=x4; }
    else if(w==3){ n=x2; o=x4; }
    else if(w==4){ n=x2; o=x3; }
    for(i=0;i<vec1.size();i++){
    if((n.compare(vec1[i].first)==0 && o.compare(vec1[i].second)==0) || (n.compare(vec1[i].second)==0 && o.compare(vec1[i].first)==0)){
      if(n.compare(vec1[i].first)==0 && o.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second){
              ans2=n; los1=o; w=1; l=2;
          }
          else{
              ans2=o; los1=n; w=2; l=1;
          }
       }
      else{
        if(vec2[i].first>vec2[i].second)
           {   ans2=o; los1=n;  w=2; l=1; }
          else 
           {   ans2=n; los1=o; w=1; l=2; }
       }
    }
  }
   string win="",lose="",win1="",lose1="",win2="",lose2="";
   for(i=0;i<vec1.size();i++){
    if((ans.compare(vec1[i].first)==0 && ans2.compare(vec1[i].second)==0) || (ans.compare(vec1[i].second)==0 && ans2.compare(vec1[i].first)==0)){
      if(ans.compare(vec1[i].first)==0 && ans2.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second){
              win=ans; lose=ans2; w=1; l=2;
          }
          else{
              win=ans2; lose=ans; w=2; l=1;
          }
       }
      else{
        if(vec2[i].first>vec2[i].second)
           {   win=ans2; lose=ans;  w=2; l=1; }
          else 
           {   win=ans; lose=ans2; w=1; l=2; }
       }
    }
  }
   if(win.length()!=0)
     cout<<win<<endl;
   else{
  for(i=0;i<vec1.size();i++){
    if((ans.compare(vec1[i].first)==0 && los1.compare(vec1[i].second)==0) || (ans.compare(vec1[i].second)==0 && los1.compare(vec1[i].first)==0)){
      if(ans.compare(vec1[i].first)==0 && los1.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second){
              win=ans; lose=los1; w=1; l=2;
          }
          else{
              win=los1; lose=ans; w=2; l=1;
          }
       }
      else{
        if(vec2[i].first>vec2[i].second)
           {   win=los1; lose=ans;  w=2; l=1; }
          else 
           {   win=ans; lose=los1; w=1; l=2; }
       }
    }
  }
    if(win.length()!=0){ if(win.compare(ans)==0) cout<<ans<<endl; else cout<<ans2<<endl; }
    else{
    for(i=0;i<vec1.size();i++){
    if((ans2.compare(vec1[i].first)==0 && los.compare(vec1[i].second)==0) || (ans2.compare(vec1[i].second)==0 && los.compare(vec1[i].first)==0)){
      if(ans2.compare(vec1[i].first)==0 && los.compare(vec1[i].second)==0){
          if(vec2[i].first>vec2[i].second){
              win=ans2; lose=los; w=1; l=2;
          }
          else{
              win=los; lose=ans2; w=2; l=1;
          }
       }
      else{
        if(vec2[i].first>vec2[i].second)
           {   win=los; lose=ans2;  w=2; l=1; }
          else 
           {   win=ans2; lose=los; w=1; l=2; }
       }
    }
  }
   if(win.compare(ans2)==0) cout<<ans2<<endl; else cout<<ans<<endl;
   }
}
 }
  return 0;
}
