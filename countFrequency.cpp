// brute force O(n)

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int freqElement(vector<int> & vect, int size , int target) {
    int count=0;
    for(int i=0 ; i< size ; i++) {
        if(vect[i] == target) {
            count++;
        }
    }
    return count;
}


int main () {
    vector <int> vect = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int size= vect.size();
    int target=8;
    cout<<freqElement(vect ,size , target);

}

//optimised approach  O(logn)
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int freqElement(vector<int> & vect, int size , int target) {
    int l= lower_bound(vect.begin(), vect.end(), target)-vect.begin();
    int r = upper_bound(vect.begin(),vect.end(),target)-vect.begin();
    
    int value=r-l;
    return value;
}


int main () {
    vector <int> vect = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int size= vect.size();
    int target=2;
    cout<<freqElement(vect ,size , target);

}
