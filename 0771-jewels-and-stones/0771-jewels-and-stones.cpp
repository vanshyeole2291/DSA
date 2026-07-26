class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s(jewels.begin(),jewels.end());
        int ans=0;
        for(int i=0;i<stones.size();i++){
            if(s.count(stones[i]))
                ans++;
        }
        return ans;
    }
};