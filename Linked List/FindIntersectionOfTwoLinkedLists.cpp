/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int len1 = 0, len2 = 0;

        while (temp1 != nullptr) {
            len1++;
            temp1 = temp1->next;
        }

        while (temp2 != nullptr) {
            len2++;
            temp2 = temp2->next;
        }

        temp1 = headA;
        temp2 = headB;

        while (len1 > len2) {
            temp1 = temp1->next;
            len1--;
        }

        while (len2 > len1) {
            temp2 = temp2->next;
            len2--;
        }

        while (temp1 != temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1;
    }
};
