//first appaorch => using extra ds structure as vector

void Reverse(stack<int> &st) {
        vector<int>ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        for(int i=0;i<ans.size();i++) {
            st.push(ans[i]);
        }
    }



// second > recursive approach

void insertAtBottom(stack<int> &st, int elem) {
      
      // if stack empty push element directly
      if(st.empty()) {
          st.push(elem);
          return;
      }
            
        // pop the elemnets from the stack
          int topElem = st.top();
          st.pop();
          
          // insert the element at last
          insertAtBottom(st,elem);
          
          // push remaining elemtn that we popped earlier
          st.push(topElem);
          
      
  }
    void Reverse(stack<int> &st) {
        if(st.empty()) return;
        
        int temp = st.top();
        st.pop();
        Reverse(st);
        
        insertAtBottom(st,temp);
    }
