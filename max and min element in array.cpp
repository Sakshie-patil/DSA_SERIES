pair<int, int> getMinMax(vector<int> arr) {
        
        int n = arr.size();
        
        int i;
        int minVal;
        int maxVal;
        // if even
        if(n % 2 == 0) {
        if(arr[0] < arr[1]) {
            minVal = arr[0];
            maxVal = arr[1];
        }
        else {
            minVal = arr[1];
            maxVal = arr[0];
        }
        i=2;
        }
        else {
            // if odd
            minVal = maxVal = arr[0];
            i=1;
        }
        
        // pair compariaion
        while( i < n-1) {
            int localMin;
            int localMax;
            if(arr[i] < arr[i+1]) {
                localMin = arr[i];
                localMax = arr[i+1];
            }
            else {
                  localMin = arr[i+1];
                localMax = arr[i];
            }
            
            if(localMin < minVal) minVal = localMin;
            if(localMax > maxVal) maxVal = localMax;
            
            i=i+2;
        }
        return { minVal , maxVal};
    }
