submission link - https://leetcode.com/submissions/detail/870103462/
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int>mpp;
        for(auto &x : rectangles){
            mpp[{x[0],x[1]}]++;
            mpp[{x[2],x[3]}]++;
            mpp[{x[0],x[3]}]--;
            mpp[{x[2],x[1]}]--;
        }
        int cnt =0;
        for(auto it:mpp){
            if(it.second !=0){
                if(abs(it.second)!=1)return false;
                 else   cnt++;
            }
        }
        return cnt ==4;
    }
};
