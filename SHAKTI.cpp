#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t,n,turn;
  scanf("%lld",&t);
  while(t--){
  scanf("%lld",&n);
  turn=(n%2==0)?1:2;
  if(turn==1)
    printf("Thankyou Shaktiman\n");
  else
    printf("Sorry Shaktiman\n");
  }
  return 0;
}
