// A number whose square ends with the same digits as the number itself

string is_AutomorphicNumber(int n) {
        // Code here
    string ans="";
       int rem = n%10;
       int square = n*n;
       int rem2 = square%10;
       if(rem == rem2) {
           ans = "Automorphic";
       }
       else {
           ans = "Not Automorphic";
       }
       return ans;
    }
