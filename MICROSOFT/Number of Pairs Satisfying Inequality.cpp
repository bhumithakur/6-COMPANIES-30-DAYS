submission lnk - https://leetcode.com/submissions/detail/870127584/
class Solution {
public:
   long long int cnt =0;
    void merge(vector<int>&temp,int lo, int hi,int mid,int diff){
        int i = lo, j = mid+1;
        while(i<=mid && j <= hi){
            if(temp[i] <= temp[j]+diff){
               cnt+=hi-j+1; 
                i++;
            }
            else{
                j++;
            }
            
        }
        sort(temp.begin()+lo,temp.begin()+hi+1);
        return;
    }
    void mergesort(vector<int>&temp,int lo, int hi,int diff){
        if(lo == hi){
            return;
        }
        int mid = (hi+lo)/2;
        mergesort(temp,lo,mid,diff);
        mergesort(temp,mid+1,hi,diff);
        merge(temp, lo,hi,mid,diff);
        return;
    }
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
         
        long long n = nums1.size();
        vector<int>temp(n);
        
        for(int i=0; i<n; i++){
            temp[i] = nums1[i]-nums2[i];
        }
        mergesort(temp,0,n-1,diff);
    return cnt;
    }
};
