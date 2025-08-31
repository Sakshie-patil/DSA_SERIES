bool palindrome(string &s , int left , int right) {
    while(right > left) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(palindrome(s,i,j)) {
                    count++;
                }
            }
        }
        return count;
    }



 int countSubstrings(string s) {
        int count = 0;
        int n = s.size();
        for(int i=0;i<n;i++) {
            // odd
            int l=i;
            int r=i;
            while(l >= 0 && r <= n && s[l] == s[r]) {
                count++;
                l--;
                r++;
            }

            // even
            l=i;
            r=i+1;
              while(l >= 0 && r <= n && s[l] == s[r]) {
                count++;
                l--;
                r++;
            }
            
        }
        return count;
    }
