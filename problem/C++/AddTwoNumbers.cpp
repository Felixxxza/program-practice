class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode l3(0);
        ListNode* cur = &l3;
        bool carry = 0;
        int sum, x, y;
        while (l1 || l2 || carry) {
            sum  =  carry + (l1?l1->val : 0) + (l2?l2->val : 0);
            carry = sum / 10;
            cur = cur->next = new ListNode(sum % 10);
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        }
        return l3.next;
    }
};