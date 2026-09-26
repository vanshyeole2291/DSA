class Solution {
public:
    bool same(int f[],int f1[]){
        for(int i=0;i<26;i++){
            if(f[i]!=f1[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};

        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }

        int wsize=s1.length();

        for(int i=0;i<s2.length();i++){
            int widx =0,idx=i;
            int wfreq[26]={0};

            while(widx<wsize && idx<s2.length()){
                wfreq[s2[idx]-'a']++;
                widx++;idx++;
            }
            if(same(freq,wfreq)){
                return true;
            }
        }
        return false;
    }
};