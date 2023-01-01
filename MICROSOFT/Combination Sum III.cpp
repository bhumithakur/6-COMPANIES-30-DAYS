submission link - https://leetcode.com/submissions/detail/868958285/
 
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
         if(k>n)return ans;
        vector<int>t;
        solve(k,n,ans,1,t);
        return ans;
        
    }
    void solve(int k,int n,vector<vector<int>>&ans,int curr,vector<int>&t){
        if(k==0 && n ==0){
            ans.push_back(t);
            return;
        }
        for(int i=curr;i<=9;i++ ){
            if(n<i)break;
            t.push_back(i);
            solve(k-1,n-i,ans,i+1,t);
            t.pop_back();
        }
        
    }
};
