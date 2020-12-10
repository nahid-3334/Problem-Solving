#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 int n,i,k,cnt=0;
  cin>>n;
  int arr[n];
memset(arr,0,sizeof(arr));
int sum=0,val;
  for(i=0;i<n;i++)
  {

      cin>>val;
     arr[val]++;
  }
 // sort(arr,arr+n);
cin>>k;
  for(i=0;i<n;i++)
  {
      if(arr[i]==k){
            cout<<i;
            break;

  }}
  return 0;}
