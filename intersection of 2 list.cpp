class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>s(arr1.begin(), arr1.end());
        vector<int>ans;

        for(int i=0;i<arr2.size();i++) {
            if(s.find(arr2[i]) != s.end()) {
                ans.push_back(arr2[i]);
            }
        }
        return ans;
    }
};
