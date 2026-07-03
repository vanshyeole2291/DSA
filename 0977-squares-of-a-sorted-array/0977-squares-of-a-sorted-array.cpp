class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        
        for(int i=0;i<n;i++){
           temp[i]=nums[i]*nums[i];
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};