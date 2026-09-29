class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0,e=height.size()-1,ans=0,area=0;

        while(st<e){
            area = min(height[st],height[e])*(e-st);
            ans=max(ans,area);
           
           if(height[st]<height[e]){
            st++;
           }else{
            e--;
           }
        }
        return ans;
    }
};