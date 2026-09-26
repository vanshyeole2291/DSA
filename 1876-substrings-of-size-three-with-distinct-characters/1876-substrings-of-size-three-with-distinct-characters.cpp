class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=0,c=0,k=3;

        while(j<s.size()){
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
                    c++;
                }
                i++;
                j++;
            }
        }
        return c;
    }
};