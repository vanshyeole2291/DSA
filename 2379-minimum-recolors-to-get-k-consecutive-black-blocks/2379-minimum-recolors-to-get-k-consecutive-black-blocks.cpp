class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=0,c=0;
        int ans=INT_MAX;
        while(j<blocks.size()){
            if(blocks[j]=='W'){
                c++;
            }
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                ans=min(ans,c);
                if(blocks[i]=='W'){
                    c--;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};