class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0,count=0,ans=0,sum=0;

        while(j<arr.size()){
            sum+=arr[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                ans= max(ans,sum);
                sum-=arr[i];
                i++;
                j++;
                ans/=k;
                if(ans>=threshold){
                    count++;
                }
                ans=0;
            }

        }
        return count;
    }
};