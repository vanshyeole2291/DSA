class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int i=0,j=0,c=0;
        while(j<s.size()){
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                int x = stoi(s.substr(i,k));
                if(x!=0 && num % x==0){
                    c++;
                }
                i++;
                j++;
            }
        }
        return c;
    }
};