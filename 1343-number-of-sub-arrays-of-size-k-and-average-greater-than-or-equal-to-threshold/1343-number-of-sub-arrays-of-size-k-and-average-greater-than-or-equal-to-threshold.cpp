class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0,ans=0,sum=0,avg=0;
        int n  =arr.size();
        while(j<n){
            sum+=arr[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                avg=sum/k;
                if(avg>=threshold){
                    ans++;
                }
                sum-=arr[i];
                i++;j++;
                avg=0;
            }
        }
        return ans;
    }
};