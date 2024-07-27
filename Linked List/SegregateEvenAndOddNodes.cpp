class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);
        ListNode* oddHead = odd;
        ListNode* evenHead = even;
        ListNode* temp = head;

        int i = 0;
        while (temp != nullptr) {
            if (i % 2 == 0) {
                even->next = temp;
                even = even->next;
            } else {
                odd->next = temp;
                odd = odd->next;
            }
            i++;
            temp = temp->next;
        }

        odd->next = nullptr;
        even->next = oddHead->next;
        return evenHead->next;
    }
};
