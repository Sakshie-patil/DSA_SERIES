#include <iostream>
#include <vector>
#include<climits>
using namespace std;

vector <int> PairSum(vector<int>& vect , int target , int size)
{
  int i=0, j=size-1;
  vector <int> ans;
  int pairsum;
  while(i<j) {
      pairsum= vect[i]+vect[j];
      if(pairsum==target) {
          ans.push_back(i);
          ans.push_back(j);
          return ans;
      }
      else if ( pairsum < target) {
          i++;
      }
      else {
          j--;
      }
  }
  return ans;
}


int main() {
    vector <int>  vect ={2,7,11,15};
    int target=9;
    int size=vect.size();
    vector <int> ans=PairSum(vect , target ,size);
     if (!ans.empty()) {
        cout << "Indices: " << ans[0] << "," << ans[1] << endl;
    } else {
        cout << "No pair found with the given target sum." << endl;
    }
}
