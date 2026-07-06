class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int d=0;
            while(i>0){
                d++;
                i/=10;
            }
            if(d%2==0){
                ans++;
            }
        }
        return ans;
    }
};