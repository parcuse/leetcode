    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        ListNode *tmp = result;
        int cursor = 0;
        while (l1 != 0 || l2 != 0){
            result->next = new ListNode(0);
            result = result->next;
            int val1 = l1?l1->val:0;
            int val2 = l2?l2->val:0;
            result->val = val1 + val2 + cursor >= 10 ? val1 + val2 + cursor - 10:val1 + val2 + cursor;
            cursor = val1 + val2 + cursor >= 10 ? 1: 0;
            l1 = l1?l1->next:0;
            l2 = l2?l2->next:0;
        }
        if (cursor){
            result->next = new ListNode(cursor);
            result = result->next;
        }
        return tmp->next;
    }

