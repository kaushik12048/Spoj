#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,c1=0;
    scanf("%lld",&t);
    t+=1;
    while(t--){
    string x;
    getline(cin,x);
    x+=" ";
    long long int i,count=1;
    string str="";
    vector<string> arr;
    for(i=0;i<x.length();i++){
    char c=x[i];
    if(c==' ' && str.length()==0)
      continue;
    else if(c==' '){
      arr.push_back(str);
      str="";
    }
    else
       str+=c;
    }
    sort(arr.begin(),arr.end());
    for(i=1;i<arr.size();i++){
    if(arr[i].compare(arr[i-1])!=0)
       count+=1;
    }
    if(c1!=0){
    if(arr.size()==0)
    printf("0\n");
    else
    printf("%lld\n",count);
    } c1++;
   }
   return 0;
}
