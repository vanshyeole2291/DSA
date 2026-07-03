class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0,m=0;
        for(int i=0;i<accounts.size();i++){
                    
                    ans=0;
            for(int j=0;j<accounts[i].size();j++){
               
                ans+=accounts[i][j];  
            }
            m=max(m,ans);
        }
        return m;
    }
};