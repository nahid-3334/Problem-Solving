#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,val;
    scanf("%d\n",&t);
    while(t--)
    {
        int ans=0;
        scanf("%d",&n);
           vector<int>v;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&val);
           v.push_back(val);

       }
       sort(v.rbegin(),v.rend());
       for(int i=2;i<v.size();i+=3)
       {
           ans+=v[i];
       }
       printf("%d\n",ans);

    }
}
