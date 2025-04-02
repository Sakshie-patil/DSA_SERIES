string removeConsecutiveCharacter(string& s) {
        // code here.
        int n = s.size();
        string ans;
        for(int i=0;i<n;i++) {
            if(ans.empty() || ans.back() != s[i]) {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
