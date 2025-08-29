class Solution {
public:
    int clumsy(int n) {
        int sum = 0;

        if (n == 1) return 1;
        if (n == 2) return 2 * 1;
        if (n == 3) return (3 * 2) / 1;

        for (int i = n; i > 0; i -= 4) {
            if (i == n) {
                sum += (i * (i - 1)) / (i - 2) + (i - 3 > 0 ? i - 3 : 0);
            } else {
                if (i >= 3) {
                    sum -= (i * (i - 1)) / (i - 2);
                    if (i - 3 > 0) sum += (i - 3);
                } else if (i == 2) {
                    sum -= 2 * 1;
                } else if (i == 1) {
                    sum -= 1;
                }
            }
        }

        return sum;
    }
};
