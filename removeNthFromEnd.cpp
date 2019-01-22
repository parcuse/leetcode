    ListNode* removeNthFromEnd(ListNode* head, int n) {
        map<int, ListNode*> node_map;
        auto tmp = head;
        int i = 0;
        while(tmp){
            node_map[i] = tmp;
            i++;
            tmp = tmp->next;
        }
        if (n - i >= 0){
            return head->next;
        }
        node_map[i-n-1]->next = node_map[i-n+1];
        return head;
    }

