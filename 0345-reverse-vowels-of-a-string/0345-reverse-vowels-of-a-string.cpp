class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st{'a','e','i','o','u','A','E','I','O','U'};

        int i=0,j=s.size()-1;
        while(i<j){
            if(!st.count(s[i])){
                i++;
            }else if(!st.count(s[j])){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};