class Solution {
public:
    int search(vector<int>& arr, int target) {
       int s=0,e=arr.size()-1;
       int m=0;

       while(s<=e){
            m = (s+e)/2;
            if(arr[m]==target){
                return m;
            }else if(arr[m]<target){
                s=m+1;
            }else {
                e=m-1;
            }
       }
       return -1;
    }
};