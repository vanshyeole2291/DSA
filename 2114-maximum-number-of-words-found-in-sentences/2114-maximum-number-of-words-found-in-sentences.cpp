class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=0;
        string s;
        for(int i=0;i<sentences.size();i++){
            int c=0;
            s=sentences[i];
            for(char ch : s){
                if(ch==' '){
                    c++;
                }
            }
            m=max(m,c);
        }
        return m+1;
    }
};