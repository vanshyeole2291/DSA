class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int c=0,m=0;
       for(int i=0;i<sentences.size();i++){
        c=1;
        string s= sentences[i];
        for(char ch : s){
            if(ch==' '){
                c++;
            }
        }
        m=max(m,c);
       }
       return m;
    }
};