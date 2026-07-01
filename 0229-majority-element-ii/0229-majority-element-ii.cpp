class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> c;
        int t = nums.size()/3;
        vector<int> temp;

        for(int i:nums){
            c[i]++;
        }

        for(auto pair:c){
            if(pair.second>t){
                temp.push_back(pair.first);
            }
        }
        return temp;
    }
};