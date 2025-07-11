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
