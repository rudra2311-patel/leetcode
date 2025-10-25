class Solution {
public:
    int totalMoney(int n) {
        int div = n/7;
        int rem = n % 7;
        int ans = 0;
                int new1 = (((div+rem) - (div+1) + 1) * ((div+rem) + (div +1)))/2;
                for(int i=0;i<div;i++){
                    ans = ans + 28 + (7*i);
                  
                }
                  ans = ans + new1;

    return ans;
    }  
};