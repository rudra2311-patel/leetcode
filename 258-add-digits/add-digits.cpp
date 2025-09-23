class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        int len = s.length();
        int sum = 0;
        if(len ==1) return num;
        while (len > 1) {
            sum = 0;
            for (int i = 0; i < len; i++) {
                sum += s[i] - '0';
            }
            s = to_string(sum);
            len = s.length();
        }

        return sum;
    }
};
