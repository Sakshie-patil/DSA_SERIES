unordered_set<int>s;
     int n =arr.size();
    int expSum=0;
    int actualSum=0;
    vector<int>vect;
    int a;
    int b;
    
    for(int i=0;i<n;i++) {
        actualSum = actualSum + arr[i];
        if(s.find(arr[i]) != s.end()) {
             a = arr[i];
             vect.push_back(a);
        }
       s.insert(arr[i]);
    }
    
    for(int i=0;i<=n;i++) {
        expSum = expSum + i;
    }
    // formula => actualSum = expSum + a - b
   b = expSum - actualSum + a;
   vect.push_back(b);
    
    return vect; 
