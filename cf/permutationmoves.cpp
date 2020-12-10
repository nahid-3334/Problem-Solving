#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int arr[n];
long long ans=0;
for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
  for(int i=0;i<n;i++)  {
        ans+=abs(i+1-arr[i]);

    }
  cout<<ans<<endl;

}
