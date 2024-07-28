class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head==NULL || (head->next==NULL && n==1)){
            return NULL;
        }
        int count=0;
        ListNode* temp=head;

        while (temp!=NULL){
            count++;
            temp=temp->next;
        }
        if (count==n){
            ListNode* ans=head->next;
            delete head;
            return ans;
        }

        int forward=count-n-1;
        temp=head;

        while (forward>0){
            forward--;
            temp=temp->next;
        }

        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;

        return head;
    }
};
