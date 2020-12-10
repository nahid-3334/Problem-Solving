#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{int n,d;
cin>>n>>d;
int arr[n];
long long ans=0;
for(int i=0;i<n;i++)
    cin>>arr[i];


for(int i=0,j=0;i<n;i++){
    while((arr[i]-arr[j])>d)
    {//cout<<arr[i]<<" "<<arr[j]<<endl;
    j++;}
    ans+=(long long)((i-j)*(i-j-1))/2;
    //cout<<ans<<endl;

}
cout<<ans<<endl;
}
