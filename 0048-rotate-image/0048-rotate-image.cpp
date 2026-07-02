class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int k=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
       { swap(matrix[i][j],matrix[j][i]);
       }
    }
    for (int i = 0; i < n / 2; i++, k--)
    { 
         for(int j=0;j<n;j++)
    {
       swap(matrix[j][i],matrix[j][k]);
    }
    }
    }
};