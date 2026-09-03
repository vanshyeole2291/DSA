class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        int n = nums.size();
        int ans=INT_MIN,sum=0;

        while(j<n){
            sum+=nums[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                ans=max(ans,sum);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return (double)ans/k;
    }
};
