
#include <bits/stdc++.h>


#define MAX 100000

using namespace std;
vector <int> adj[MAX];
bool vis[MAX];
list<int> *ad;
int *visited;
int vertices;

void DFS(int u)
{
    vis[u] = true;

    vertices++;
    vector<int>::iterator it;


    for(it=adj[u].begin();it!=adj[u].end();it++)
    {
        if(vis[*it] == false)
        {
            vis[*it] = true;
            DFS(*it);
        }
    }
}

int main()
{
    int i,m,u,v,numComponents=0,allv=0,temp=2,count=0;
    long long int n;
    int eachC[MAX];
    cin >> n >> m;
if(n == 1)
    {
        cout <<"0\n";
        return 0;
    }
    for(i=0;i<m;i++)
    {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   memset(vis,false,sizeof(vis));

    for(int i = 0;i < n;++i) {
         if(vis[i] == false)     {
                vertices=0;
             DFS(i);

              eachC[numComponents] = vertices;
              numComponents++;
         }
        }

    long long int totalWays = n*(n-1) / 2;
    long long int sameWays = 0;

    for(i=0;i<numComponents;i++)
    {
        sameWays += (eachC[i]*(eachC[i]-1) / 2);
    }

    cout << (totalWays - sameWays) << endl;
    return 0;
}
