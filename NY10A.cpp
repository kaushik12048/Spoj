#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t,f=1,y;
 scanf("%lld",&t);
 while(t--){
 long long int i,x,ttt=0,tth=0,tht=0,thh=0,htt=0,hth=0,hht=0,hhh=0;
 scanf("%lld",&y);
 string s,p;
 cin>>s;
 string t1="TTT",t2="TTH",t3="THT",t4="THH",t5="HTT",t6="HTH",t7="HHT";
 for(i=0;i<s.length()-2;i++)
 {
     p.append(s,i,i+2);
     if(p.compare(t1)==0)
        ttt++;
     else if(p.compare(t2)==0)
        tth++;
     else if(p.compare(t3)==0)
        tht++;
     else if(p.compare(t4)==0)
        thh++;
     else if(p.compare(t5)==0)
        htt++;
     else if(p.compare(t6)==0)
        hth++;
     else if(p.compare(t7)==0)
        hht++;
     else
        hhh++;
     cout<<p<<endl;
     p.clear();
     cout<<p<<endl;
  }
  printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld\n",f,ttt,tth,tht,thh,htt,hth,hht,hhh);
  f++;
  }
  return 0;
}
