class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            unordered_set<int>e;
            unordered_set<int>o;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0) e.insert(nums[j]);
                else o.insert(nums[j]);
                if(o.size()==e.size()) ans = max(ans,j-i+1);
            }
        }
        return ans;
    }
};