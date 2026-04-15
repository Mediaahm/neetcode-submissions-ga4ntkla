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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        
        while(list1 != nullptr && list2 != nullptr) {
            ListNode* newNode = new ListNode;
            if(list1->val <= list2->val) {
                newNode->val = list1->val;
                list1 = list1->next;
            } else {
                newNode->val = list2->val;
                list2 = list2->next;
            }
            // tail logic once here
            if(tail == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }



        if(list1 != nullptr){
            if(tail == nullptr) head = list1;
            else tail->next = list1;
        }
        if(list2 != nullptr){
            if(tail == nullptr) head = list2;
            else tail->next = list2;
        }


        return head;
    }
};
