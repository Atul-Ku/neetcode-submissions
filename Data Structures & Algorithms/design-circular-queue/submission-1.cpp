struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(-1), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class MyCircularQueue {
   public:
    int sz;
    int cap;
    ListNode* head = new ListNode();
    ListNode* curr = new ListNode();
    MyCircularQueue(int k) {
        sz = k;
        cap = k;
    }

    bool enQueue(int value) {
        if (sz == cap) {
            ListNode* temp = new ListNode(value);
            head = temp;
            curr = head;
            sz--;
            return true;
        } else if (sz == 0) {
            return false;
        } else {
            ListNode* temp = new ListNode(value);
            curr->next = temp;
            curr = curr->next;
            sz--;
            return true;
        }
    }

    bool deQueue() {
        if (sz == cap) return false;
        if (head==curr) {
            ListNode* temp = new ListNode();
            ListNode* del = head;
            del->next = nullptr;
            delete (del);
            head=temp;
            curr=head;
            sz++;
            return true;
        }
        ListNode* temp = head->next;
        ListNode* del = head;
        del->next = nullptr;
        delete (del);
        head = temp;
        sz++;
        return true;
    }

    int Front() { 
        return head->val; 
    }

    int Rear() { 
        return curr->val; 
    }

    bool isEmpty() {
        if (sz == cap) return true;
        return false;
    }

    bool isFull() {
        if (sz == 0) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */