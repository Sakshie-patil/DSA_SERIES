vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> transpose(n, vector<int>(m));

            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    transpose[j][i] = mat[i][j];
                }
            }
    return transpose;
    }
