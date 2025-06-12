  bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;

        // Step 1: Find tail
        ListNode* tail = head;
        while (tail->next != NULL)
            tail = tail->next;

        // Step 2: Compare values from both ends
        while (head != tail && head->prev != tail) {
            if (head->val != tail->val)
                return false;
            head = head->next;
            tail = tail->prev;
        }

        return true;
    }
