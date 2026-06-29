class Solution {
public:
    int reverse(int x) {
       int d=0,n=x;
       long rev=0;
       while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n/=10;
       }
       if(rev<INT_MIN||rev>INT_MAX){
        return 0;
       }
       return rev;
    }

};