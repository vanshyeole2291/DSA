class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int> e={heights.begin(),heights.end()};
       sort(e.begin(),e.end());
       int ans=0;
       for(int i=0;i<heights.size();i++){
        if(heights[i]!=e[i]){
            ans++;
        }
       }
       return ans;
    }
};