class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans=0;
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            temp[i]=ans;
        }
        return temp;
    }
};