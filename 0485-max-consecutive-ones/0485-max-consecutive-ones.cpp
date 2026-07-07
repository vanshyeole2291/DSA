class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=0,m=0;
        for(int i:nums){
            if(i==1){
                s++;
                m=max(m,s);
            }else{
                s=0;
            }
        }
        return m;
    }
};