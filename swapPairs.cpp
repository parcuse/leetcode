    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode * before =new ListNode(0);
        auto result = head;
        ListNode * true_result =new ListNode(head->next->val);
        true_result->next = result;
        while (head && head->next){
                before->next = head->next;
                head->next = head->next->next;
                before->next->next = head;
                before = head;
                head = head->next;
        }
        return true_result;
    }

