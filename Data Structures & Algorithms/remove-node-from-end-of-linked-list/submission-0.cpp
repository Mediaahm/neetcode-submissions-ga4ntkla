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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp -> next;
        }

        if(count==n){
            head = head->next;
            return head;
        }
        

        int i = 0;
        temp = head;
        ListNode* node;
        while(i < (count - n -1)){
            temp = temp->next;
            i++;
        }
        node = temp -> next;
        temp -> next = node->next;

        delete node;

        return head;
    }
};
