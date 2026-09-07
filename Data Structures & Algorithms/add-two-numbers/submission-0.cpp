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
    // static ListNode* reverse(ListNode* head){
    //     ListNode* curr = head;
    //     ListNode* prev=nullptr;
    //     ListNode* next=nullptr;
    //     while(curr->next!=nullptr){
    //         next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //     }

    //     return prev;
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* curr=head;
        int rem=0;
        while(l1!=nullptr && l2!=nullptr){
            int sum=(l1->val+l2->val+rem)%10;
            rem=(l1->val+l2->val+rem)/10;
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            int sum=(l1->val+rem)%10;
            rem=(l1->val+rem)/10;
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=curr->next;
            l1=l1->next;
        }
        while(l2!=nullptr){
            int sum=(l2->val+rem)%10;
            rem=(l2->val+rem)/10;
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=curr->next;
            l2=l2->next;
        }
        if(rem) curr->next=new ListNode(rem);
        return head->next;
    }
};
