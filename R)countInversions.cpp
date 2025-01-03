/// brute force approach
time complexity: O(n^2)
int countInversions(vector<int>&arr , int n) {
    int invCount=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                invCount++;
            }
        }
    }
    return invCount;
}


///optimal approach
time complexity : O(nlogn)
int main() {
    vector <int> arr = {6,3,5,2,7};
    int n=arr.size();
   cout<<countInversions(arr,n);
}

int merge(vector<int>&arr , int st ,int mid, int end) {
    vector<int>temp;
    int i=st;
    int j=mid+1;
    int invCount = 0;
    while(i<=mid && j<=end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
            invCount+= (mid-i+1);
        }
    }
    
    while(i<=mid) {
         temp.push_back(arr[i]);
            i++;
    }
    
    while(j<=end) {
         temp.push_back(arr[j]);
            j++;
    }
    
    for(int idx=0;idx<temp.size();idx++)  {
        arr[st+idx] = temp[idx];
    }
    
    return invCount;
 }

int mergeSort(vector<int>&arr , int st , int end) {
    if(st < end) {
        int mid=st + (end-st)/2;
        
       int leftCount = mergeSort(arr,st,mid);
        int rightCount = mergeSort(arr,mid+1,end);
        
        int invCount = merge(arr,st,mid,end);
        
        return leftCount + rightCount + invCount;
       
    }
    return 0;
}

int main() {
    vector <int> arr = {6,3,5,2,7};
    int n=arr.size();
    cout<<mergeSort(arr , 0 ,n-1);
}
