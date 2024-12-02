class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //BFS WITH ADJACENCY LIST (while loop)
        unordered_map<int, vector<int>> adjacenCList;
        for(auto edge : edges){
            int u = edge[0], v = edge[1];
            adjacenCList[u].push_back(v);
            adjacenCList[v].push_back(u);
        }

        queue<int> q;
        q.push(source);

        vector<bool> visited(n, false);
        visited[source] = true;

        while(!q.empty()){
            int current = q.front();
            q.pop();

            if(current==destination) return true;
            for(int neighbour : adjacenCList[current]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    return false;    
    }
};