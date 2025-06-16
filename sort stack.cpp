//approach 1=> using extra space as vector

void SortedStack ::sort() {
    // Your code here
    vector<int>ans;
    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    
    std::sort(ans.begin(),ans.end());
    
    for(int i=0;i<=ans.size()-1;i++) {
        s.push(ans[i]);
    }


// approach 2: recurssion
void insertAtBottom(stack<int> &s,int elem) {
    if(s.empty() || elem > s.top()) {
        s.push(elem);
        return;
    }
    
    int topElem = s.top();
    s.pop();
    
    insertAtBottom(s,elem);
    
    s.push(topElem);
    
    
}
void SortedStack ::sort() {
    // Your code here
    if(s.empty()) {
        return;
    }
    
    int temp = s.top();
    s.pop();
    
   sort();
   
   insertAtBottom(s,temp);
    
}
