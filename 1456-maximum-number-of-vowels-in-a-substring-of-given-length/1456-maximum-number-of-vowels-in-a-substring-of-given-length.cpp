class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> st{'a','e','i','o','u'};
        int i=0,j=0,count =0,ans=0;
        int n =s.size();
        while(j<n){
            if(st.count(s[j])){
            count++;
            }
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
               ans = max(ans,count);
               if(st.count(s[i])){
            count--;
            }
               i++;
               j++;
               
            }
            

        }
        return ans;
    }
};