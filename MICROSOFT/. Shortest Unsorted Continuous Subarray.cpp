submission link - https://leetcode.com/submissions/detail/870295183/
  class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        vector<int>t;
        t = nums;
        sort(t.begin(),t.end());
        for(int i =0; i<n; i++){
            cout<<t[i]<<" ";
        }
        while(lo < hi){
            if(t[lo] == nums[lo] && t[hi] == nums[hi]){
                lo++,hi--;
            }
            else if(t[lo] == nums[lo] && t[hi] != nums[hi]){
                lo++;
            }
            else if(t[lo] != nums[lo] && t[hi] == nums[hi]){
                hi--;
            }
            else{
                return hi-lo+1;
            }
        }
       return 0; 
    }
};
