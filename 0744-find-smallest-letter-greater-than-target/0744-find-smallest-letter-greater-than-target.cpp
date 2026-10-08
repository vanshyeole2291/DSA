class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s =0, e = letters.size()-1;
        char ans=letters[0];

        while(s<=e){
            int m = (s+e)/2;
            if(letters[m]>target){
                ans=letters[m];
                e=m-1;
            }else if(letters[m]<=target){
                s=m+1;
            }
        }
        return ans;
    }
};