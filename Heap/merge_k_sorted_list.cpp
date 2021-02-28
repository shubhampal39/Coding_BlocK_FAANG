
ListNode* mergeKLists(vector<ListNode*>& lists) {
        int listSize = lists.size();
		if (0 == listSize)
			return NULL;

		int interval = 1;
		while (interval < listSize) {
			for (int i = 0; i < listSize - interval;) {
				lists[i] = merge(lists[i], lists[i + interval]);
				i += (interval * 2);
			}
			interval <<= 1;
		}
       return lists[0];
     }
    ListNode* merge(ListNode *l1,ListNode *l2)
    {
        if(l1==NULL) return l2;
       if(l2==NULL) return l1;

        ListNode *result=new ListNode(-1);
        ListNode *curr=result;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1==NULL)
            {
                curr->next=l2;
                 l2=l2->next;                       
            }
            else if(l2==NULL)
            {
                curr->next=l1;
                l1=l1->next;
            }
            else if(l1->val<l2->val)
            {
                curr->next=l1;
                l1=l1->next;
            }
            else
            {
                curr->next=l2;
                l2=l2->next;
            }
           curr=curr->next;
            
        }
        return result->next;
    }