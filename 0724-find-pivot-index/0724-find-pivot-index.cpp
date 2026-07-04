class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0,ans=0;
        int leftsum=0;
        for(int i:nums){
            total+=i;
        }
        for(int i=0;i<nums.size();i++){
            int rightsum=total-leftsum-nums[i];
            if(rightsum==leftsum){
                return i;
            }else{
                leftsum+=nums[i];
            }
        }
        return -1;
    }
};