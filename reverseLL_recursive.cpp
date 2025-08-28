 ListNode* reverseList(ListNode* head) {
        // base case
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* newHead = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
