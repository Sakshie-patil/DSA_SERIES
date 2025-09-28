vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        vector<int>ans;
        
        if(m==1) {
            for(int j=0;j<n;j++) {
                ans.push_back(mat[0][j]);
            }
        }
        
        if(n==1) {
            for(int i=0;i<m;i++) {
                ans.push_back(mat[i][0]);
            }
        }
            
        // top row
        for(int j=0;j<n;j++) {
            ans.push_back(mat[0][j]);
        }
        
        // right column
        for(int i=1;i<m;i++) {
            ans.push_back(mat[i][n-1]);
        }
        
        // bottom row
        for(int j=n-2;j>=0;j--) {
            ans.push_back(mat[m-1][j]);
        }
        
        // left col
        for(int i=m-2;i>=1;i--) {
            ans.push_back(mat[i][0]);
        }
        
        return ans;
    }
