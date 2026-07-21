class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int mf=0,ans=0;
         for(int i : nums){
            m[i]++;
         }

         for(auto p:m){
            if(p.second>mf){
                mf=p.second;
                ans=p.first;
            }
         }
         return ans;
    }
};