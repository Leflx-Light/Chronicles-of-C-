#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

     vector<int> adj[n + 1];

     for (int i = 0; i < m;i++){
         int u, v;
         // for directed graph: u--->v  
         cin >> u >> v;

         adj[u].push_back(v);
         // below line is not needed in case of directed graph 
         // it will reduce its space complexity to O(E)
         adj[v].push_back(u);
     }
         return 0;
}