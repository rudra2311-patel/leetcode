class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool result = false;
         for(int i=0;i<m;i++){
        if(target<=matrix[i][n-1]){
            if(target== matrix[i][n-1]){
                result = true;
                return result;
            }
            else {
                for(int k=0;k<n;k++){
                    if(target == matrix[i][k]){
                        result = true;
                        return result;
                    }
                }
            }
        }
    }
    return result;
    }
};