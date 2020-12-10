#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int f=0;

for(int i=n/7;i>=0;i--)
{
    int a=n-i*7;
    if(a%4==0)
    {
        f=1;
        for(int k=0;k<a/4;k++)
            cout<<4;
          for(int k=0;k<i;k++)
            cout<<7;
          break;
}
if(!f)
    cout<<"-1"<<endl;

}}
