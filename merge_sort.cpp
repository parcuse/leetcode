    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        auto result = l3;
        while(l1 && l2){
            l3->next = new ListNode(0);
            l3 = l3->next;
            l3->val = l1->val < l2->val ? l1->val : l2->val;
            if(l1->val < l2->val){
                l1 = l1->next;
            }
            else{
                l2 = l2->next;
            }
        }
        if(l1){
            l3->next = l1;
        }
        if(l2){
            l3->next = l2;
        }
        return result->next;
    }

