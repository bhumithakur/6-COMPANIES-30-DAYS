sub link - 
  class Solution {
public:
    void findTopoSort(int node, vector<int> &vis, stack<int> &st, vector<int> adj[]){
        vis[node] = 1;
        for(auto it:adj[node]){
            if(!vis[it])
                findTopoSort(it, vis, st, adj);
        }
        st.push(node);
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vis(numCourses, 0);
        vector<int> adj[numCourses];         // adj list
        stack<int> st;
        vector<int> topo(numCourses);
        int count = 0;
        
         
    
        for(int i = 0;i<prerequisites.size() ;i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[v].push_back(u);
        }
        
        for(int i=0; i<numCourses; i++){
            if(!vis[i])
                findTopoSort(i, vis, st, adj);
        }
        while(!st.empty()){
            topo[st.top()] = count++;
            st.pop();
        }
        for(int i=0; i<numCourses; ++i){
            for(int it: adj[i])
                if(topo[i] >= topo[it])
                    return false;
        }
        return true;
    
 
    }
};
