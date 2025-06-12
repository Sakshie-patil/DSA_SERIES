       vector<pair<int,int>>ans;
        Node* tail = head;
        while(tail->next!=NULL) tail=tail->next;
        
           Node* low = head;
             Node* high = tail; 
        
        while(low != high && low->prev != high) {
           
             int sum = low->data + high->data;
             if(sum == target) {
                 ans.push_back({low->data,high->data});
                 low=low->next;
                  high=high->prev;
             }
                 
             else if(sum > target) {
                 high=high->prev;
                 
             }
             else{
                 low=low->next;
             }
            }
        
        return ans;
        
