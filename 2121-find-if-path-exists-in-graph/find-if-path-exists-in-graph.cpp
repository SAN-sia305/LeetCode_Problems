class Solution {
public:
    bool dsf(int n, vector<bool>& visited ,unordered_map<int, vector<int>>& adjacenCList, int source, int destination){
        if(source == destination) return true;
        
        visited[source] = true;
        for(int neighbour : adjacenCList[source]){
            if(!visited[neighbour]) {
               if(dsf(n, visited , adjacenCList, neighbour, destination)){return true;}
            }
            
        }
   
    return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //DFS WITH ADJACENCY MATRIX (recursion)
        unordered_map<int, vector<int>> adjacenCList;
       for(auto edge : edges){
         int u = edge[0],v = edge[1];
         adjacenCList[u].push_back(v);
         adjacenCList[v].push_back(u);
       }

       vector<bool> visited(n,false);
       visited[source] = true;

       return dsf(n, visited , adjacenCList, source, destination);
    }
};