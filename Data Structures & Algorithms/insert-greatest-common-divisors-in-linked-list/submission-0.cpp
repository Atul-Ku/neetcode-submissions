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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        ListNode* next=head->next;
        while(next!=nullptr){
            int a=gcd(curr->val,next->val);
            ListNode* temp=new ListNode(a);
            ListNode* prev_next=next;
            curr->next=temp;
            temp->next=next;
            curr=prev_next;
            next=next->next;
        }

        return head;
    }
};