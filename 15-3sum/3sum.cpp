#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> unique_triplets;
        vector<int> rudra_pos;
        vector<int> rudra_neg;
        int counter_of_zero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) rudra_neg.push_back(nums[i]);
            else {
                if (nums[i] == 0) counter_of_zero++;
                rudra_pos.push_back(nums[i]);
            }
        }
        int ru = rudra_pos.size();
        int rn = rudra_neg.size();
        int final_loop = min(ru, rn);
        sort(rudra_neg.begin(), rudra_neg.end(), greater<int>());
        sort(rudra_pos.begin(), rudra_pos.end());
        if (counter_of_zero >= 3) unique_triplets.insert({0,0,0})
        ;
        if (counter_of_zero != 0) {
            while (counter_of_zero != 0) {
                if (final_loop <= 0) break;
                else if ((rudra_pos[final_loop - 1] + rudra_neg[final_loop - 1]) == 0) {
                    counter_of_zero--;
                    vector<int> t = {rudra_pos[final_loop - 1], 0, rudra_neg[final_loop - 1]};
                    sort(t.begin(), t.end());
                    unique_triplets.insert(t);
                }
                final_loop--;
            }
        }

        unordered_set<int> neg_set(rudra_neg.begin(), rudra_neg.end());
        for (int i = 0; i < rudra_pos.size(); i++) {
            for (int j = i + 1; j < rudra_pos.size(); j++) {
                long long needLL = -((long long)rudra_pos[i] + (long long)rudra_pos[j]);
                if (needLL < INT_MIN || needLL > INT_MAX) continue;
                int need = (int)needLL;
                if (neg_set.count(need)) {
                    vector<int> t = {rudra_pos[i], rudra_pos[j], need};
                    sort(t.begin(), t.end());
                    unique_triplets.insert(t);
                }
            }
        }

        unordered_set<int> pos_set(rudra_pos.begin(), rudra_pos.end());
        for (int i = 0; i < rudra_neg.size(); i++) {
            for (int j = i + 1; j < rudra_neg.size(); j++) {
                long long needLL = -((long long)rudra_neg[i] + (long long)rudra_neg[j]);
                if (needLL<INT_MIN||needLL>INT_MAX) continue;
                int need = (int)needLL;
                if (pos_set.count(need)) {
                    vector<int> t = {rudra_neg[i],rudra_neg[j],need};
                    sort(t.begin(), t.end());
                    unique_triplets.insert(t);
                }
            }
        }
        return vector<vector<int>>(unique_triplets.begin(), unique_triplets.end());
    }
};
