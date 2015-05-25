#include<bits/stdc++.h>
using namespace std;
int main()
{
  string k;
  while(getline(cin,k))
  {
    long long int count=1,i;
    char c=k[0],d;
    for(i=1;i<k.length();i++){
      d=k[i];
      if(d==c)
        count++;
      else{
      if(count==1)
        printf("%c",c);
      else if(count==2)
        printf("%c%c",c,c);
      else if(count==3)
        printf("%c%c%c",c,c,c);
      else
        printf("%lld!%c",count,c);
     count=1;
     c=d;}
   }
      if(count==1)
        printf("%c",c);
      else if(count==2)
        printf("%c%c",c,c);
      else if(count==3)
        printf("%c%c%c",c,c,c);
      else
        printf("%lld!%c",count,c);
    printf("\n"); 
   }
  return 0;
}
