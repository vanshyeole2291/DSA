class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1;

        for(char ch : magazine){
            m1[ch]++;
        }
        for(char ch : ransomNote){
            m1[ch]--;
            if(m1[ch]<0){
                return false;
            }
        }
        
        return true;

    }
};