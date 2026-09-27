class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i=0,j=0,ans=0,f=0,t=0;
        while(j<answerKey.size()){
            if(answerKey[j]=='T'){
                t++;
            }else{
                f++;
            }
            while(min(t,f)>k){
                if(answerKey[i]=='T'){
                    t--;
                }else{
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