submission link - https://leetcode.com/problems/rotate-function/submissions/

class Solution {
public:
    
   
    int maxRotateFunction(vector<int>& nums) {
      int n=nums.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans += i*nums[i];
        }
        int ind =n-1;
        int res=ans;
        for(int k=1;k<n;k++){
            ans =ans+ (sum-nums[ind])-(n-1)*nums[ind];
            res = max(res,ans);
            ind--;
        }
        return res;  
       
    }
};
