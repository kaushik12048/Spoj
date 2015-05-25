#include<bits/stdc++.h>
using namespace std;
long arr[101][101],t,a;main(){cin>>t;while(t--){long a,i=1,j,f=0;cin>>a;for(i=1;i<=a;i++)for(j=1;j<=i;j++){cin>>arr[i][j];(arr[i][j]=arr[i][j]+max(arr[i-1][j],arr[i-1][j-1]))>f?f=arr[i][j]:f;}cout<<f<<endl;}} 
