string printSequence(string S)
{
    //code here.
    string str="";
    unordered_map<char,string>m;
  
         m['A'] = "2";
         m['B'] = "22"; 
         m['C'] = "222";
         m['D'] = "3";
         m['E'] = "33";
         m['F'] = "333";
         m['G'] = "4";
         m['H'] = "44";
         m['I'] = "444";
         m['J'] = "5";
         m['K'] = "55";
         m['L'] = "555";
         m['M'] = "6";
         m['N'] = "66";
         m['O'] = "666";
         m['P'] = "7";
         m['Q'] = "77";
         m['R'] = "777";
         m['S'] = "7777";
         m['T'] = "8";
         m['U'] = "88";
         m['V'] = "888";
         m['W'] = "9";
         m['X'] = "99";
         m['Y'] = "999";
         m['Z'] = "9999";
         m[' '] = "0";      // spaces are mapped to 0
         

    
    int n = S.size();
    for(int i=0;i<n;i++) {
        if(m.find(S[i]) != m.end()) {
        str = str + m[S[i]];
        }
        
    }
    
    return str;
    
}
