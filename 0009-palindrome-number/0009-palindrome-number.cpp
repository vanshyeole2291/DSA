class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long r=0;
        while(x>0){
            int d=x%10;
            r = r*10+d;
            x/=10;
        }
        return r==temp;
    }
};