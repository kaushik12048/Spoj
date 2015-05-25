/*http://zobayer.blogspot.in/2009/11/volume-of-irregular-tetrahedron.html/*
/*Suppose you are given the 6 sides of an irregular tetrahedron and you need to find the volume consumed by it.
Let the given sides to be u, v, w, W, V, U. Here, (u, U), (v, V), (w, W) are considered to be opposite edge pairs ( opposite edges means the edges which do not share common vertices ). Now the volume can be found from the following formula:

Let:
u′ = v² + w² - U²
v′ = w² + u² - V²
w′ = u² + v² - W²
Now:
volume = 1⁄12 × √(4u²v²w² - u²u′² - v²v′² - w²w′² + u′v′w′)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
  scanf("%lld",&t);
  while(t--){
  long long int a,b,c,d,e,f;
  scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
  double x=double(pow(b,2))+double(pow(c,2))-double(pow(f,2));
  double y=double(pow(a,2))+double(pow(c,2))-double(pow(e,2));
  double z=double(pow(b,2))+double(pow(a,2))-double(pow(d,2));
  double ans=(1/12.0)*sqrt((4*a*a*b*b*c*c)-(a*a*x*x)-(b*b*y*y)-(c*c*z*z)+x*y*z);
  printf("%.4lf\n",ans);
  }
  return 0;
}
