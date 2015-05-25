#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  scanf("%lld",&t);
  if(t%10==0)
     printf("2\n");
  else
   { printf("1\n");
     printf("%lld\n",t%10);
   }
  return 0;
}
