class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9 * num) return "";
        if(sum == 0) return (num == 1) ? "0" : "";

        string ans = "";
        for(int i = 0; i < num; i++){
            int d = min(9, sum);
            ans += (d + '0');
            sum -= d;
        }
        return ans;
    }
};
