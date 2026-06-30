class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> numset;
        vector<int> temp;
        for(int i: nums){
            numset[i]++;
        }
        for(int i: nums){
            if(numset[i]==1 && numset.find(i+1)==numset.end()&&numset.find(i-1)==numset.end()){
              
                temp.push_back(i);
            }
        }
        return temp;
    }
};