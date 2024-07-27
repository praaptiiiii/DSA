class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL) return false;
        ListNode* slow=head->next;
        ListNode* fast=head->next->next;
        while (slow!=NULL && fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast){
                return true;
            }
        }
        return false;
    }
};
