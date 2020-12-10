#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,minm,k,ans=0,val;
vector<int>v;

    scanf("%d%d",&n,&k);
    while(n--)
    {scanf("%d",&val);
        v.push_back(val);
    }
    sort(v.rbegin(),v.rend());

     for(int i=0;i<v.size();i++)
     {ans+=v[i]*(i/k+1);
     }
     printf("%d\n",ans);
}
