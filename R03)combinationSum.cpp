set<vector<int>>s;
     void getAllCombinations(vector<int>& arr , int i , int target , vector<int>&combination , vector<vector<int>> &ans) {
        int n= arr.size();
        if(i == n || target < 0) return;

        if(target == 0) {
            if(s.find(combination) == s.end()) {
                ans.push_back({combination});
                s.insert(combination);
            }
           
            return;
        }

    combination.push_back(arr[i]);
    getAllCombinations(arr,i+1,target-arr[i],combination,ans);     //single inclusion
    getAllCombinations(arr,i,target-arr[i],combination,ans);      //multiple inclusion
    combination.pop_back();
    getAllCombinations(arr,i+1,target,combination,ans);


     }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
 
         vector<int>combination;
         vector<vector<int>> ans;
        

         getAllCombinations(arr,0,target,combination,ans);
         return ans;


    }
