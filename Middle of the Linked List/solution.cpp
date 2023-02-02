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
    const unsigned int getListSize(ListNode* head) {
        unsigned int listSize = 0;
        while (head->next) {
            ++listSize;
            head = head->next;
        }
        return listSize;
    }

    ListNode* middleNode(ListNode* head) {
        const unsigned int listSize = getListSize(head);
        unsigned int middleIndex = listSize / 2;
        if (listSize % 2) ++middleIndex;

        unsigned int counter = 0;
        while (head->next && counter < middleIndex) {
            ++counter;
            head = head->next;
        }
        return head;
    }
};