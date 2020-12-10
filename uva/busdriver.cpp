#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,d,r,val;

   while(scanf("%d%d%d",&n,&d,&r))
   {
       if(n==0)break;int ans=0;
            vector<int>morn,eve;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&val);
           morn.push_back(val);

       }
       for(int i=0;i<n;i++)
       {
           scanf("%d",&val);
           eve.push_back(val);

       }
       sort(morn.begin(),morn.end());
       sort(eve.rbegin(),eve.rend());
       for(int i=0;i<n;i++)
       {
           int total=morn[i]+eve[i];
           if(total>d)
            ans+=(total-d)*r;
       }
       printf("%d\n",ans);
   }

return 0;
}
