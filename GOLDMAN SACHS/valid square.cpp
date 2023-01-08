sub link - https://leetcode.com/submissions/detail/873807856/
class Solution {
public:
    int d(vector<int>& p1,vector<int>& p2){
        return ((p2[0]-p1[0])*(p2[0]-p1[0])  + (p2[1]-p1[1])*(p2[1]-p1[1]));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
       
         unordered_set<int>st({d(p1,p2),d(p1,p3),d(p1,p4),d(p2,p3),d(p2,p4),d(p3,p4)});
        return !st.count(0) && st.size() == 2 ? true : false;
    }
};
