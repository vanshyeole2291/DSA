class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=0,sum=0;
        for(int i=0;i<nums.size();i++){
                while(nums[i]>0){
                int d= nums[i]%10;
                sum += d;
                nums[i]/=10;
                }
                ans=sum;
                sum=0;
                if(ans==i){
                    return i;
                }
        }
        return -1;
    }
};