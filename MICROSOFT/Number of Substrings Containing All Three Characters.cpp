link - https://leetcode.com/submissions/detail/870622043/
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int i=0;
        int cnt =0;
         map<char,int>mpp;
        for(int j =0; j< n; j++){
           
             mpp[s[j]]++;
        while(mpp.size() == 3){
            cnt += n-j;
             mpp[s[i]]--;
            if(mpp[s[i]] ==0){
                
             mpp.erase(s[i]);
                   
                 
            }
           i++;
        }
             
        }
        return cnt;
    }
};
