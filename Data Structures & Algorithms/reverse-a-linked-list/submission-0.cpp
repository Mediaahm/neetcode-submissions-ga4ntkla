/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* head1 = nullptr;

        while(head!=nullptr){
            ListNode* newNode = new ListNode();

            newNode->val = head->val;
            newNode->next = head1;
            head = head->next;
            head1 = newNode;
        }
        return head1;
    }
};
