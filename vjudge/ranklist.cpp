#include<bits/stdc++.h>
using namespace std;
//#define first f
//#define s cecond s
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return (a.first>b.first||((a.first==b.first)&&(a.second<b.second)));
}
int main()
{
//freopen("rank.txt","r+",stdin);
 ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    pair<int,int>team[51];
    for(int i=0;i<n;i++)
    {
        cin>>team[i].first>>team[i].second;
    }

  sort(team,team+n,cmp);
      pair<int,int>ans=team[k-1];
  int cnt=0;

for(int i=0;i<n;i++)
    {
       if(team[i]==ans)
        cnt++;
    }
    cout<<cnt<<endl;
}
