#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {

 cin>>n;
 int a=3,b=7,f=0;
for(int i=1;i<=40;i++)
{
    if(a*i==n||b*i==n)
        f=1;

}
for(int i=1;i<=40;i++)
{
    for(int j=1;j<=14;j++)
        if(a*i+b*j==n)
        f=1;
}
for(int i=1;i<=14;i++)
{
    for(int j=1;j<=40;j++)
        if(b*i+a*j==n)
        f=1;

}
if(f)
    cout<<"YES\n";
else
    cout<<"NO\n";
    }
}
