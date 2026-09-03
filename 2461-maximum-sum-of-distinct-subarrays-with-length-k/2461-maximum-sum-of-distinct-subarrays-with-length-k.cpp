class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n =nums.size();
        unordered_map<int,int> s;
        int i=0,j=0;
        long long ans=0,sum=0;
        while(j<n){
            s[nums[j]]++;
            sum+=nums[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                if(s.size()==k){
                    ans = max(ans,sum);
                }
                s[nums[i]]--;
                if(s[nums[i]]==0){
                    s.erase(nums[i]);
                }
                sum-=nums[i];
                i++;
                j++;

            }
        }
        return ans;
    }
};