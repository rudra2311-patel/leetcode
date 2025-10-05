class Solution {
public:
    vector<int> decimalRepresentation(int n) {

        vector<int> ans;
        int count = 0;
        while(n > 0 ){
            int num = n % 10;
            num = num * pow(10,count);
            n =  n/10;
            if(num!=0){
                ans.push_back(num);
            }
            count++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};