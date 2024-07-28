class Solution {
public:
    ListNode* mid(ListNode* head){
        if (head==NULL || head->next==NULL) return head;

        ListNode* slow=head;
        ListNode* fast=head->next;

        while (fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        while (left!=NULL && right!=NULL){
            if (left->val <= right->val){
                temp->next=left;
                left=left->next;
            }
            else{
                temp->next=right;
                right=right->next;
            }
            temp=temp->next;
        }
        while (left!=NULL){
            temp->next=left;
            temp=temp->next;
            left=left->next;
        }
        while (right!=NULL){
            temp->next=right;
            temp=temp->next;
            right=right->next;
        }
        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if (head==NULL || head->next==NULL) return head;

        ListNode* middle=mid(head);

        ListNode* right=middle->next;
        middle->next=NULL;
        ListNode* left=head;

        left=sortList(left);
        right=sortList(right);

        return merge(left,right);
    }
};
