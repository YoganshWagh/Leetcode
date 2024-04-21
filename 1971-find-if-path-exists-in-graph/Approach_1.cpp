//QUESTION: https://leetcode.com/problems/find-if-path-exists-in-graph/description/
//REFERENCE: https://youtu.be/mbR1XSXidEE?si=KpRhrqmTvC-cXcr6
//Approach 1: Using DFS 
//T.C = O(m+n), n is the number of nodes and m is the number of edges in the graph.
//S.C = O(m+n),  because of the adjacency list representation of the graph and the visited array used for DFS.

class Solution {
public:
    
    bool check(unordered_map<int, vector<int>>& mp, int node, int dest, vector<bool>& visited) {
        if(node == dest)
            return true;
        
        if(visited[node])
            return false;
        
        visited[node] = true;
        for(auto &it : mp[node]) {
            if(check(mp, it, dest, visited))
                return true;
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        if(source == destination)
            return true;
        
        unordered_map<int, vector<int>> mp;
        
        for(vector<int> &vec : edges) {
            int u = vec[0];
            int v = vec[1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        
        vector<bool> visited(n, false);
        return check(mp, source, destination, visited);
    }
};