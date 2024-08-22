class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix[0].size();
        int m= matrix.size();
        if(n==m && n==0) return false;

        int low=0;
        int high=n*m;

        while(low<high){
            int mid = low + (high-low)/2;
            int i= mid/n;
            int j= mid%n;
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                high=mid;
            }
            else{
                low= mid+1;
            }
        }
        return false;
    }
};
