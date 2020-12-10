
#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int sum,i,num,u=1,v=0,d=1,n;
     vector<long long int>vec;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>num;
          vec.push_back(num);
     }
     sort(vec.begin(),vec.end());
     sum=vec[n-1]-vec[0];
     for(i=1;i<n;i++){
          if(vec[i]==vec[0]){
               u++;
          }
          if(vec[n-1]==vec[i]){
               v++;
          }
     }
     if(u==0 || v==0 || n==2){
     d=1;}
     else if(vec[0]==vec[n-1]){
          d=((n-1)*n)/2;
     }
     else{
        d=u*v;
     }
     cout<<sum<<" "<<d<<endl;
}
