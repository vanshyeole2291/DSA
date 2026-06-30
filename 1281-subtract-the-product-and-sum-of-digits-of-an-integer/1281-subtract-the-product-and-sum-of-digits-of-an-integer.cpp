class Solution {
public:
    int subtractProductAndSum(int n) {
        int d=0, a=n;
        long p=1,s=0,ans=0;
        while(a!=0){
            d=a%10;
            p*=d;
            s+=d;
            a/=10;
        }
            return ans= p-s;
    }

};