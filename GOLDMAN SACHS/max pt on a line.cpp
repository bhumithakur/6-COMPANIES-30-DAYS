sub link - https://leetcode.com/submissions/detail/873786114/
class Solution {
public:
    int maxPoints(vector<vector<int>>& pt) {
        int n = pt.size();
        if(n <= 2 )return n; // line is made by 2pts
        int res = 0;
        for(int i =0; i< n; i++){
            unordered_map<double,int>mpp;
            double slope = 0.0;
            int dup = 0;
            for(int j =0; j<n; j++){
                int x1 = pt[i][0];
                int x2 = pt[j][0];
                int y1 = pt[i][1];
                int y2 = pt[j][1];
                int dy = y2-y1;
                int dx = x2-x1;
                if(dy==0 && dx ==0){
                    dup++;
                    continue;
                }
                 if(dx != 0)
                     slope = dy*1.0/dx;
                else
                    {slope = INT_MAX;}
                   mpp[slope]++;
                
            }
            if(mpp.size()==0)res = dup;
            else for(auto it : mpp){
                res = max(res,it.second+dup);
            }
        }
        return res;
    }
};
