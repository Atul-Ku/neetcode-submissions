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
    int list_len(ListNode* head){
        int len=0;
        while(head!=nullptr){
            head=head->next;
            len++;
        }

        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int l=list_len(head);
        int rem=l-n;
        if(rem==0) return head->next;
        while(rem>1){
            curr=curr->next;
            rem--;
        }
        curr->next=curr->next->next;

        return head;
    }
};
