class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size()/2;
        vector<int> pos;
        vector<int> neg;
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        return arr;
    }
};