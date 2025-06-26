vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int, int>m;
        vector<int>ans;
        for(int i=0;i<arr.size();i++) {
            m[arr[i]]++;
        }

        for(auto it : m) {
              if(it.second > 1) {
            ans.push_back(it.first);
        }
        }
      
        return ans;
    }
