sub link -https://leetcode.com/submissions/detail/872086244/
class Solution {
public:
    vector<int> lps(string s){
       
        int n = s.size();
         vector<int> temp(s.size(),0);
        int ind =0;
        for(int i =1; i<n;){
            if(s[i] == s[ind]){
                ind++;
                temp[i] = ind;
                i++;
                
            }
            else {
                if(ind !=0){
                    ind = temp[ind-1];
                }
                else{
                    i++;
                }
            }
        }
        return temp;
    }
    string longestPrefix(string s) {
       
        int n =s.size();
        vector<int>ans = lps(s);
        return s.substr(0,ans.back());
    }
};
