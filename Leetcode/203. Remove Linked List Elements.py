class Solution {
public:
    ListNode* removeElements(ListNode* h, int T) {
        ListNode *d = new ListNode(-1, h), *p = d;
        for(;h; h = h -> next) 
            if(h -> val != T) 
                p = h;                      
            else                                  
				p -> next = h -> next;      
        return d -> next;                     
    }
};
