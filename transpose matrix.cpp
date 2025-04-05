void transpose(vector<vector<int>>& mat, int k) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        for(int i=0;i<m;i++) {
            for(int j=i+1;j<m;j++) {
                swap(mat[i][j] , mat[j][i]);
            }
        }
    }
