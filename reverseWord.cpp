#include <iostream>
#include <algorithm>
using namespace std;

string reverseWord(string s , int n) {
    string ans = "";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++) {
        string word="";
        //loop fpr single word
        while(s[i] !=' ' && i < n) {
            word = word + s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if (!word.empty()) {
            if (!ans.empty()) {
                 ans = ans + " ";
            }
            
             ans = ans + word;
        }
    }
    return ans;
}



int main() {
    string s="  hello world  ";
    int n = s.length();
    cout<<reverseWord( s ,  n);
}
