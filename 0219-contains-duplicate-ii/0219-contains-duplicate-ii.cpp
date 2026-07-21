class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                t=i-m[nums[i]];   
                 if(t<=k){
                    return true;
            } 
            }
            m[nums[i]]=i;
            t=0;
        }
        return false;

    }
};