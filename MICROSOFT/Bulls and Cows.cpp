submission link - https://leetcode.com/problems/bulls-and-cows/submissions/

class Solution {
public:
    string getHint(string s , string g) {
        unordered_map<int,int>mpp;
        
        int cnt1 =0,cnt2=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == g[i])cnt1++;
            else  mpp[s[i]]++;
        }
        string ans = "";
        for(auto i =0;i<s.size();i++){
            if((s[i]!=g[i]) && mpp[g[i]]>0){
                mpp[g[i]]--;
                cnt2++;
            }
        } 
        return to_string(cnt1) + "A" + to_string( cnt2) + "B";
        
    }
};
