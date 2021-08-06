# include <bits/stdc++.h>

using namespace std;

# define V 9

void printSolution(int dist[])
{
    cout <<"Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout  << i << " \t\t"<<dist[i]<< endl;
}

int selectMinVex(int values[], bool processed[])
{
    int minvex = INT_MAX;
    int vex;
    for (int i = 0; i < V; i++)
    {
        if (processed[i] == false && minvex >= values[i])
        {
            minvex = values[i];
            vex = i;
        }
    }
    return vex;
}


void Dijkstras(int graph[][V])
{
    int src = 0;
    int parent[V];
    bool processed[V];
    int values[V];
    
    for (int j=0; j < V; j++)
    {
        processed[j] = false;
        values[j] = INT_MAX;
    }

    parent[src] = -1;
    values[src] = 0;

    for (int i=0; i < V-1; i++)
    {
        int minval = selectMinVex(values, processed);
        processed[minval] = true;

        for (int j=0; j < V; j++)
        {
            if (graph[minval][j] != 0 && processed[j] == false && values[minval] != INT_MAX)
            {
                if (values[minval]+graph[minval][j] < values[j])
                {
                    values[j] = values[minval]+graph[minval][j];
                    parent[j] = minval;
                }
            }
        }

    }
    printSolution(values);
}


int main()
{
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 }};
    Dijkstras(graph);
    return 0;
}

