#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(1){
 // printf("working");
  int x,y,i;
  scanf("%d %d",&x,&y);
  if(x==0 && y==0)
    break;
   int arr[x],val[y],min1=INT_MAX,min2=INT_MAX,t=INT_MAX,min3=INT_MAX;
  memset(arr,0,sizeof(arr));
  memset(val,0,sizeof(val));
  for(i=0;i<x;i++){
     scanf("%d",&arr[i]);  
     min3=min(min3,arr[i]);}
  for(i=0;i<y;i++){
     scanf("%d",&val[i]); 
 /* sort(arr,arr+x);
  sort(val,val+y);
  if(arr[0]<val[1])
    printf("Y\n");
  else
    printf("N\n");
   */
    if(val[i]<=min1)
     {  t=min1;
        min1=val[i];
     }
    if(t!=min2 || val[i]!=min1)
         if(val[i]!=min1)
            min2=val[i];
         else
            min2=t;
   //  printf("%d %d %d\n",val[i],min1,min2);
   }
  t=0;
 // printf("%d %d\n",min1,min2);
  
 // if(t==0)
  if(min3<min2)
    printf("Y\n");
  else
    printf("N\n");

  }
  return 0;
}
     
