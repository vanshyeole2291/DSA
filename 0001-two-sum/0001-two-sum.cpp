class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> temp;

       for(int i=0;i<nums.size();i++){
        int s = target - nums[i];
        if(temp.find(s)!=temp.end()){
            return{temp[s],i};

        }
        temp[nums[i]]=i;

       }
       return {};

    }
};