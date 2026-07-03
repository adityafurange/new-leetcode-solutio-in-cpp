class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));

        int top=0,left=0;
        int right=n-1,bottom=n-1;
        int val=1;
        while(top<=bottom && left<=right)
        {
            //top
            for(int i=left;i<=right;i++)
            {
                matrix[top][i]=val;
                val++;
            }
            top++;

            //right
            for(int j=top;j<=bottom;j++)
            {
                matrix[j][right]=val;
                val++;
            }
            right--;

             // Bottom row
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                   { matrix[bottom][i]=val;;
                   val++;}
                bottom--;
            }

            // Left column
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                   { matrix[i][left]=val;;
                   val++;}left++;
            }
            
        }
        return matrix;
        
    }
};