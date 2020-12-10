#include <bits/stdc++.h>
using namespace std;
vector< int > vis;
vector< vector<int> > graph;
void dfs( int x)
{
  vis[x] = 1;
  cout << x << " ";
  for( int u : graph[x] )
  {
    if( !vis[u] )
      dfs(u);
  }
}

int main()
{
  int nodes, edges;
  cin >> nodes ;     // input number of nodes in graph
  cin >> edges ;     // input number of edges in graph

  graph.resize( nodes+1);
  vis.resize(nodes+1);
  for( int i =0 ; i <= nodes ; i++)
    vis[i] = 0;  // marking all nodes as not visited in starting

  for( int i = 0 ; i < edges ; i++)
  {
    int u , v ;
    cin >> u >> v;
    graph[u].push_back(v);      // we can use a pair of (v,cost) in case of weighted graph
    graph[v].push_back(u);      // if graph is Directed this line will be omitted.
  }
