#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]){
    int vis[V + 1] = {0};
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
 }


int main()
{
    int n, m;
    cout << "Enter Number of Nodes and Edges respectively: " << endl;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> bfs = bfsOfGraph(n, adj);
    for(auto it : bfs){
        cout<<it<<" ";
    }
    cout<<endl;
    
        return 0;

        // input:
        /*
        5 6
2 1
1 3
2 4
3 4
2 5
4 5
        */
}