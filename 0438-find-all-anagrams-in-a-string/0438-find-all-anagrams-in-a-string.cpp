class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i = 0, j = 0, k = p.size();
        vector<int> f1(26,0);
        vector<int> f2(26,0);
        vector<int> ans;

        for(int i=0;i<k;i++){
            f1[p[i]-'a']++;
        }

        while(j<s.size()){
            f2[s[j]-'a']++;
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                if(f1==f2){
                    ans.push_back(i);
                }
                f2[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;

    }
};