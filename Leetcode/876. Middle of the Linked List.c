/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* temp=head;
    struct ListNode* mid=head;
    while(temp!=NULL&&temp->next!=NULL){
        mid = mid->next;
        temp= temp->next->next;
    }
    // printf("Mid->%d\n",mid->val);
    return mid;
}
