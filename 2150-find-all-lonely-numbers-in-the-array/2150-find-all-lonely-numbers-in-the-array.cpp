class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> numset(1000002,0);
        vector<int> temp;
        for(int i: nums){
            numset[i]++;
        }
        for(int i: nums){
            if(numset[i]==1 && (i==0 || numset[i-1]==0)&&numset[i+1]==0){
              
                temp.push_back(i);
            }
        }
        return temp;
    }
};