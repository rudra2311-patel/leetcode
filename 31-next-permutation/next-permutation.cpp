class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int counter = 0;
        int n = nums.size() - 1;

        for (int i = n; i >= 1; i--) {   
            if (nums[i] > nums[i - 1]) {
                counter++;
                int j = n;
                while (j > i-1 && nums[j] <= nums[i-1]) {
                    j--;
                }
                swap(nums[i - 1], nums[j]);
                reverse(nums.begin() + i, nums.end());
                return;
            }
        }
        if (counter == 0) {
            reverse(nums.begin(), nums.end());
        }
        return;   
    }
};
