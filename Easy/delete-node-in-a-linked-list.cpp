class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* nex = node->next;
        
        swap(nex->val, node->val);
        
        node->next = nex->next;
        
    }
};