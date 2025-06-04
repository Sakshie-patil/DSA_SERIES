 vector<int> majorityElement(vector<int>& arr) {
        
        int freq1=0;
        int freq2=0;
        int ans1=0;
        int ans2=0;
        int n=arr.size();
        for(int i=0;i<n;i++) {
            if(freq1==0 && ans2 != arr[i])  {
                ans1 = arr[i];
                freq1 = 1;
            }
            else if(freq2 == 0 && ans1 != arr[i]) {
                ans2=arr[i];
                freq2 = 1;
            }
            else if(ans1 == arr[i]) {
                freq1++;
            }
            else if(ans2 == arr[i]) {
                freq2++;
            }
            else  {
                freq1--;
                freq2--;
            }
        }
    // manual checking
       vector<int>ans;
       freq1=0;
       freq2=0;
       for(int i=0;i<n;i++) {
        if(ans1 == arr[i]) freq1++;
        else if(ans2 == arr[i]) freq2++;
       }
       int mini = (int)(n/3)+1;
       if(freq1 >= mini) ans.push_back(ans1);
       if(freq2 >= mini) ans.push_back(ans2);
       return ans;
    }
