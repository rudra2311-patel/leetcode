class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if (n % 2) return {}; 

        sort(changed.begin(), changed.end());
        vector<int> original;

        int i = 0, j = 1;
        while (i < n) {
            if (changed[i] == -1) { 
                i++;
                if (j <= i) j = i + 1;
                continue;
            }

            while (j < n && (changed[j] == -1 || changed[j] != 2 * changed[i])) {
                j++;
            }

            if (j == n) return {};

            original.push_back(changed[i]);
            changed[j] = -1; 
            changed[i] = -1; 
            i++;
            if (j <= i) j = i + 1;
        }

        if ((int)original.size() * 2 != n) return {};
        return original;
    }
};
