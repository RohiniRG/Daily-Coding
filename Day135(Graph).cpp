#include <bits/stdc++.h>

using namespace std;


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
    return 0;
}

