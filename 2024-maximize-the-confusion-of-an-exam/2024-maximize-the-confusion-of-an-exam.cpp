class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i=0,j=0,ans=0,f=0;
        while(j<answerKey.size()){
            if(answerKey[j]=='F'){
                f++;
            }
            while(min(f,(j-i+1)-f)>k){
                if(answerKey[i]=='F'){
                    f--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};