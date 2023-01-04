sub link -https://leetcode.com/submissions/detail/870875535/
class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        double ans =1;
        if(n==1){
            return ans;
        }
       ans= 2;
        return 1/ans;
    }
};
