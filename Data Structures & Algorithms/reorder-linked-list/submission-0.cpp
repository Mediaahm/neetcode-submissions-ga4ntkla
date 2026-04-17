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
    void reorderList(ListNode* head) {

        int count = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }

        int middle = (count+1) /2;
        temp = head;
        int i = 0;
        while(i < middle){
            temp = temp->next;
            i++;
        }

        stack <ListNode*> half;

        while(middle < count){
            half.push(temp);
            temp = temp->next;
            middle++;
        }

        ListNode* curr = head;
        while(!half.empty()) {
            ListNode* front = curr->next;   // save next front node
            ListNode* back = half.top();    // get node from back
            half.pop();
            curr->next = back;              // curr -> back
            back->next = front;             // back -> front
            curr = front;                   // move curr forward
        }

        curr->next = nullptr;
    }
};
