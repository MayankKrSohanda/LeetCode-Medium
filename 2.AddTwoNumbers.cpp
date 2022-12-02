class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode* l3 = new ListNode;
        ListNode* result = l3;
        while(l1 || l2) {
            if(l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            l3->next = new ListNode(sum % 10);
            l3 = l3->next;
            sum = sum > 9 ? 1 : 0;
        }
        if(sum) {
            l3->next = new ListNode(sum);
        }
        return result->next;
    }
};
