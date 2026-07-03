class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =nums.size();
        int s=n*2;
        int l=0,m=0;
        vector<int> ans(s);
       for(int i=0;i<s;i++){
            ans[i]=nums[l];
            l++;
            if(l>n-1){
                l=0;
            }
        }
        
        return ans;
    }
};