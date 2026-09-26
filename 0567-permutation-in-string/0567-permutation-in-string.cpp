class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0,j=0,k=s1.size();
        vector<int> f1(26,0);
        vector<int> f2(26,0);
        for(int i=0;i<k;i++){
            f1[s1[i]-'a']++;
        }

        while(j<s2.size()){
            f2[s2[j]-'a']++;
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                if(f1==f2){
                    return true;
                }
                f2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};