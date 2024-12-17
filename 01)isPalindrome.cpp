#include <iostream>
#include <cctype>
using namespace std;

bool palindrome(string str , int n) {
    int start=0;
    int end=n-1;
    
    while(start<end) {
        if(!isalnum(str[start])) {
        start++;
        continue;
    }
        if(!isalnum(str[end])) {
        end--;
        continue;
    }
    if(tolower(str[start]) != tolower(str[end])) {
       return false;
    }
    start++;
    end--;
}
return true;
}

int main() {
    string str = "race6$6ecar";
    int n=str.length();
    cout<<palindrome(str,n);
}
