#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,left,right,ans=1;

  cin>>n;
   cin>>left>>right;
   int  minm=left;
  int  maxm=right;
  for(int i=1;i<n;i++)
  {
       cin>>left>>right;
       if(left<=minm && right>=maxm)
       {
           ans=i+1;
       }
     else if(left<minm||right>maxm)
     {
         ans=-1;
     }

    minm=min(minm,left);
     maxm=max(maxm,right);

  }
  cout<<ans<<endl;
return 0;
}
