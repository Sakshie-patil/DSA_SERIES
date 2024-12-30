bool isPalindrome(string s) {
        string s2 = s;
       reverse(s2.begin() , s2.end());
       return s2 == s;
    }


    void  getAllParts(string s,vector<string> &partitions ,  vector<vector<string>> &ans ) {

        if(s.size() == 0) {
            ans.push_back(partitions);
            return;
        }

        for(int i=0;i<s.size() ;i++) {
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
                partitions.push_back(part);
                getAllParts(s.substr(i+1) , partitions , ans);    //recursion
                partitions.pop_back();                            //backtracking
            }
        }
    }

    vector<vector<string>> partition(string s) {
         vector<vector<string>> ans;
         vector<string> partitions;

         getAllParts(s , partitions , ans);
         return ans;
    }
