#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main() {
   vector<int>v[1009];
 int t,n,m,x,y,s,i;
 cin>>t;
    while(t--) {
cin>>n>>m;
   for(i=0;i<=n;i++) v[i].clear();
 for(i=0;i<m;i++) {
cin>>x>>y;
v[x].pb(y);
v[y].pb(x);
}
cin>>s;
bool vis[n+1];
memset(vis,false,sizeof(vis));
 int dist[n+1];
memset(dist,0,sizeof(dist));
queue<int>q;
q.push(s);
vis[s]=true;
 dist[s]=0;
while(!q.empty())
 { int u=q.front();
 q.pop();
for(i=0;i<v[u].size();i++)
 { int v1= v[u][i];
if(!vis[v1]) {
vis[v1]=true;
 dist[v1]=dist[u]+1;
q.push(v1); }
 }
}
for(i=1;i<=n;i++)
{ if(i!=s)
{ if(dist[i]==0)
 cout<<"-1 ";
 else
cout<<dist[i]<<" ";
 } }
 cout<<endl;

      }
 return 0; }
