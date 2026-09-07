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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0) return nullptr;
        vector<int> v;
        for(int i=0;i<n;i++){
            ListNode* curr=lists[i];
            while(curr!=nullptr){
                v.push_back(curr->val);
                curr=curr->next;
            }
        }

        sort(v.begin(),v.end());
        if(v.size()==0) return nullptr;
        ListNode* head=new ListNode(v[0]);
        ListNode* temp=head;
        for(int i=1;i<v.size();i++){
            ListNode* node = new ListNode(v[i]);
            temp->next=node;
            temp=temp->next;
        }

        return head;
    }
};
