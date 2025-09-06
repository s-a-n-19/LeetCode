class Solution {
private: 
    bool dfsCheck(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& pathVis, vector<int>& order){
        vis[node] = 1;
        pathVis[node] = 1;

        for(int x:adj[node]){
            if(!vis[x]){
                if(!dfsCheck(x, adj,vis,pathVis,order)) return false; // cycle found
            } else if (pathVis[x]) {
                return false; // cycle found
            }
        }
        pathVis[node] = 0;     // backtrack
        order.push_back(node); // add after visiting children
        return true;
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //adjacency list construction
        vector<vector<int>> adj(numCourses);
        for(auto &pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]); 
        }
        vector<int> vis(numCourses,0);
        vector<int> pathVis(numCourses,0);
        vector<int> order;

        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(!dfsCheck(i, adj,vis,pathVis,order)) return {};
            }
        }
        reverse(order.begin(), order.end());
        return order;
    }
};