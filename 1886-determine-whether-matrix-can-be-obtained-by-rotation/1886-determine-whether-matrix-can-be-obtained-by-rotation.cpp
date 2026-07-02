class Solution {
public:
  void rotate(vector<vector<int>>& mat) {
    int n=mat.size();
    int k=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
       { swap(mat[i][j],mat[j][i]);
       }
    }
    for (int i = 0; i < n / 2; i++, k--)
    { 
         for(int j=0;j<n;j++)
    {
       swap(mat[j][i],mat[j][k]);
    }
    }
  }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
      if (mat == target)
    return true;

for (int i = 0; i < 3; i++) {
    rotate(mat);
    if (mat == target)
        return true;
}

return false;
    }
};