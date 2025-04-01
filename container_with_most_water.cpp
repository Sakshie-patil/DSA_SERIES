nt maxArea(vector<int>& arr) {
        int n = arr.size();
        int ans=0;
        int left=0;
        int right=n-1;
        int w;
        int h;
        int area;

       while( right > left) {
        w = right - left;
        h = min(arr[left] , arr[right]);
        area = w * h;
        ans = max(ans , area);
        if(arr[left] < arr[right]) {
            left++;
        }
        else {
            right--;
        }
   }
        return ans;
    }
