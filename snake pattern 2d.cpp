 vector<int> snakePattern(vector<vector<int> > mat) {
        // code here
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        for(int i=0;i<m;i++) {
            // even => left to right
            if(i % 2 ==0) {
                
                for(int j=0;j<n;j++) {
                    ans.push_back(mat[i][j]);
                }
            }
            // odd => right to left
            else {
                for(int j=n-1;j>=0;j--) {
                    ans.push_back(mat[i][j]);
                }
            }
        }
        return ans;
    }
