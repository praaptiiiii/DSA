class Solution {
public:
    ListNode* rev(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        if (head->next->next == nullptr && head->val != head->next->val) return false;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* pal = rev(slow);
        ListNode* temp = head;
        ListNode* secondHalfStart = pal;
        bool result = true;

        while (result && pal != nullptr) {
            if (temp->val != pal->val) {
                result = false;
            }
            temp = temp->next;
            pal = pal->next;
        }

        return result;
    }
};
