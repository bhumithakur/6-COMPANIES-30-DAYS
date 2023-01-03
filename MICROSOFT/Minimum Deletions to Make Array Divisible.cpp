submission link - https://leetcode.com/submissions/detail/870314199/
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nD) {
        int gcd = nD[0];
        for(int i =0; i< nD.size();i++){
            gcd = __gcd(gcd,nD[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(gcd % nums[i] == 0)return i;
        }
        return -1;
        
    }
};
