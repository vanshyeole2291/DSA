class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set numset(nums.begin(),nums.end());
        int l=0;
        for(int i : numset){
            if(numset.find(i-1)==numset.end()){
                int currnum = i;
                int currstreak=1;
                while(numset.find(currnum+1)!=numset.end()){
                    currnum+=1;
                    currstreak+=1;
                }
                l=  max(l,currstreak);
            }
        }
        return l;
    }
};