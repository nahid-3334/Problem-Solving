#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int sum,i,num,cnt1=1,cnt2=0,way=1,n;
     vector<long long int>v;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>num;
          v.push_back(num);
     }
     sort(v.begin(),v.end());
     sum=v[n-1]-v[0];
     for(i=1;i<n;i++){
          if(v[i]==v[0]){
               cnt1++;
          }
          if(v[i]==v[n-1]){
               cnt2++;
          }
     }
     if(n==2){
     way=1;}
     else if(v[0]==v[n-1]){
          way=((n-1)*n)/2;
     }
     else{
    way=cnt1*cnt2;
     }
     cout<<sum<<" "<<way<<endl;
}
