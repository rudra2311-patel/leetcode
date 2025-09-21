class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 1;
        long long right = 1e14; 
        long long ans = right;

        while(left <= right) {
            long long mid = left + (right - left) / 2;
            long long sum = 0;
            for(int i = 0; i < time.size(); i++) {
                sum += mid / time[i];
            }

            if(sum < totalTrips) {
                left = mid + 1;
            } else {
                ans = mid;      
                right = mid - 1;
            }
        }
        return ans;
    }
};
