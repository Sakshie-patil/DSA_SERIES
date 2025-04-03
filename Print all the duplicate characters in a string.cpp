//1) for loop => O(n)
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
void printDuplicates(string str)
{
    int len = str.length();

    // Sorting the string
    sort(str.begin(), str.end());

    // Loop through the sorted string to find duplicates
    for (int i = 0; i < len; i++) {
        int count = 1;

        // Counting the occurrences of each character
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Printing the duplicate character and its count
        if (count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }
}
int main()
{
    string str = "test string";
    printDuplicates(str);
    return 0;
}
// This code is contributed by Veerendra_Singh_Rajpoot


//2) optimal - hashing

#include <iostream>
#include <vector>
#include<unordered_map>
#include<algorithm>
#include <queue>
using namespace std;

void printDuplicates(string s) {
    unordered_map<char,int>m;
    int n = s.size();
    for(int i=0;i<n;i++) {
        m[s[i]]++;
    }
    
    for(auto num : m) {
        if(num.second > 1) {
            cout<<num.first<<":"<<num.second<<endl;
        }
    }
}

int main() {
  string str = "test string";
    printDuplicates(str);
    return 0;
       
    
}
