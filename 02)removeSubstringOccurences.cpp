#include <iostream>
using namespace std;

string removeSubstring(string s , int n , string part) {
   
while(s.length() > 0 && s.find(part) < s.length()) {
    s.erase(s.find(part) , part.length());
}
return s;
}

int main() {
    string s = "axxxxyyyyb";
    int n=s.length();
    string part = "xy";
    cout<<removeSubstring(s,n,part);
}
