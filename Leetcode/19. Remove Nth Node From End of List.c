/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp = head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    if(count==1&&n==1){
        head=NULL;
        return head;
    }
    if(count==n){
        head = head->next;
        return head;
    }
    printf("%d\n",count);
    temp=head;
    while(count!=n+1){
        temp=temp->next;
        count--;
    }
    printf("\n%d",temp->val);
    temp->next = temp->next->next;
    return head;
}
