void DFSUtil(int i, vector<int> adj[], bool visited[], vector<int> &res) {
    if (visited[i]) return;
    
    visited[i] = true;
    res.push_back(i);
    
    for (int j : adj[i]){
        if (!visited[j]) DFSUtil(j, adj, visited, res);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    // Code here
    vector <int> res;
    bool visited[V] = {false};
    stack <int> stk;
    
    for (int i = 0; i < V; i++) {
        if (!visited[i]) DFSUtil(i, adj, visited, res);
    }
    // stk.push(adj[0]);
    return res;
}

