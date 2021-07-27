#include <bits/stdc++.h>

using namespace std;

vector<int>bfsOfGraph(int V, vector<int> adj[])
{
    int visited[V] = {0};
    queue <int> q;
    
    visited[0] = 1;
    q.push(0);
    vector<int> bfs;
    
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        bfs.push_back(f);
        
        for (int i :adj[f])
        {
            if (visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
    return bfs;
}


void addEdge(vector <int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}


int main()
{
    int V;
    cout<<"Enter the number of vertices of graph: ";
    cin>>V;

    int E;
    cout<<"Enter the number of edges of graph: ";
    cin>>E;

    vector<int> adjList[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cout<<"Enter u: ";
        cin>>u;
        cout<<"Enter v: ";
        cin>>v;
        cout<<"\n";
        addEdge(adjList, u, v);
    }

    cout<<"The graph is as follows: \n";
    for (int i = 0; i < V; i++ )
    {
        cout<<"For vertex "<<i<<": -> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout<<adjList[i][j]<<" ";
        }
        cout<<"\n";
    }

    vector <int> res = bfsOfGraph(V, adjList);

    cout << "\nBFS : ";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout<<"\n";

    return 0;
}

