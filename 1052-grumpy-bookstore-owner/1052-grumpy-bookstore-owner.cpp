class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i=0,j=0,base=0,extra=0,ans=0;
        while(j<customers.size()){
            if(grumpy[j]==1){
                extra+=customers[j];
            }else if(grumpy[j]==0){
                base+=customers[j];
            } 
            if(j-i+1<minutes){
                j++;
                
            }else if(j-i+1==minutes){
                ans= max(ans,extra);
                if(grumpy[i]==1){
                    extra-=customers[i];
                }
                i++;
                j++;
            }
        }
        
        return base+ans;
    }
};