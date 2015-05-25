#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
unsigned long long int arr[MAX];
int main(){
 unsigned long long int t,i;
 scanf("%lld",&t);
 while(t--){
 unsigned long long int n,k,mi=1000000002;
 memset(arr,0,sizeof(arr));
 scanf("%llu %llu",&n,&k);
 for(i=0;i<n;i++)
    scanf("%llu",&arr[i]);
 sort(arr,arr+n);
 for(i=0;i+k-1<n;i++){
   mi=min(mi,arr[i+k-1]-arr[i]);
 }
 printf("%llu\n",mi);
 }
 return 0;
}
