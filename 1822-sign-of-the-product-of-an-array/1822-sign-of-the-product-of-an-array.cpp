class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n= nums.size();
        int sum =1;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
            sum *=-1;
            }
        }
        return sum;
    }
};