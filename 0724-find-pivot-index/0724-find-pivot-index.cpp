class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int t =0,lsum=0,rsum=0;
      for(int i:nums){
        t+=i;
      }
      for(int i=0;i<nums.size();i++){
        rsum=t-lsum-nums[i];
        if(rsum==lsum){
            return i;
        }else{
            lsum+=nums[i];
        }
      }
      return -1;
    }
};