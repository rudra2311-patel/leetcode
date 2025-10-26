class Solution {
public:
    long long removeZeros(long long n) {
        vector<int> rudra;  
        int rem;

        
        while (n > 0) {
            rem = n % 10;
            if (rem != 0) {
                rudra.push_back(rem);
            }
            n = n / 10;
        }

        long long ans = 0;
        for (int i = rudra.size() - 1; i >= 0; i--) {
            ans = ans * 10 + rudra[i];
        }

        return ans;
    }
};
