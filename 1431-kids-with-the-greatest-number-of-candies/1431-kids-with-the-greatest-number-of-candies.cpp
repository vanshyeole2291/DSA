class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int m = *max_element(candies.begin(),candies.end());
        vector<bool> temp;
        for(int i:candies){
            if(i+extraCandies>=m){
                temp.push_back(true);
            }else{
                temp.push_back(false);
            }
        }
        return temp;
    }
};