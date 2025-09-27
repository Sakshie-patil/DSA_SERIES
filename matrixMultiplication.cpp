vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        // Code here
        // because 
        int n = mat1.size();
        int a = mat1[0].size();
        int b = mat2[0].size();
        
        vector<vector<int>>ans(n, vector<int>(b));
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<b;j++) {
                for(int k=0;k<a;k++) {
                    ans[i][j] = ans[i][j] + mat1[i][k] * mat2[k][j];
                }
            }
        }
        return ans;
    }
