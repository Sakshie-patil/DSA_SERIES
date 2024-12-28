// time complexity : O(n * 2^n)
void printSubsets(vector<int>& arr , int i ,vector<int>&ans,  vector<vector<int>> &subSets) {
    
     if( i == arr.size()) {
        subSets.push_back({ans});
        return;
     }
     //include
     ans.push_back(arr[i]);
     printSubsets(arr,i+1,ans,subSets);
     
     //backtrack
     ans.pop_back();
     
     //exclude
      printSubsets(arr,i+1,ans,subSets);
 }



    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> subSets;
        vector <int> ans;

        printSubsets(arr,0,ans,subSets);

        return subSets;
    }
