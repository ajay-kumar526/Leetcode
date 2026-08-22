class Solution {
public:
    bool checkDivisibility(int n) {
        int p=n;
        int digitsum=0;
        int digitproduct=1;
        while(n){
            int digit=n%10;
            digitsum=digitsum+digit;
            digitproduct=digitproduct*digit;
            n/=10;
        }
        int sum=digitsum+digitproduct;

        if(p%sum==0)return true;
        else return false;


    }
};