#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x=1,n;
    long long i,k,j,p;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        {
        cin>>a[i];
    }
    sort(a,a+n);

p=a[0];
  for(i=1;i<n;i++){
if(a[i]>=p)
    {
        x++;
        p+=a[i];
    }

  }
  cout<<x;
}
