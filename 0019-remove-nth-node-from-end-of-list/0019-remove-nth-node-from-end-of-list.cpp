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
        int size=0;

        while(temp!=NULL){
            size++;
            temp=temp->next;
        }

        int required= size-n;
        temp=head;

        if (n == size) {
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }

        for(int i=1;i<required;i++){
            temp=temp->next;
        }

        ListNode* deleteNode=temp->next;

        temp->next=temp->next->next;

        delete deleteNode;

        return head;
    }
};