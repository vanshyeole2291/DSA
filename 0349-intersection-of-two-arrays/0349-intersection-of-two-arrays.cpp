class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set s(nums1.begin(),nums1.end());
        unordered_set s2(nums2.begin(),nums2.end());
        vector<int> temp;
        for(int i: s2){
            if(s.count(i))
                temp.push_back(i);

        }
        return temp;
    }
};