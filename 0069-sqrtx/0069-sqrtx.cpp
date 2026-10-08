class Solution {
public:
int mySqrt(int n) {
    int s=0;
    int e=n;
    long m=(s+e)/2;
    long a=-1;

    while(s<=e){
        if(m*m==n)
        return m;

        if(m*m>n)
        {
            e=m-1;
        }else{
            a=m;
            s=m+1;
        }
        m=(s+e)/2;
    }
    return a;
}

    
};