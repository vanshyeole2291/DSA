class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set numset(nums.begin(),nums.end());
        int longeststreak=0;
        for(int i:numset){
            if(numset.find(i-1)==numset.end()){
                int currentnum =i;
                int currentstreak=1;

                while(numset.find(currentnum+1)!=numset.end()){
                    currentnum+=1;
                currentstreak+=1;
                
            }
            longeststreak=max(longeststreak,currentstreak);
        }   
    }
    return longeststreak;
    }
};