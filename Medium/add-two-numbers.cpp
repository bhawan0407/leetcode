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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        
        int val;
        
        ListNode* head = NULL;
        ListNode* curr = head;
        
        while(l1 || l2 || carry)
        {
            val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            
            ListNode* newNode = new ListNode;
            newNode->next = NULL;
            newNode->val = val % 10;
            
            if(!head)
            {
                head = newNode;
                curr = newNode;
            }
            else
            {
                curr->next = newNode;
                curr = newNode;
            }
            
            carry = val / 10;
            
            if(l1)
            {
                l1 = l1->next;
            }
            
            if(l2)
            {
                l2 = l2->next;
            }
        }
        
//         while(l1)
//         {
//             val = l1->val + carry;
            
//             ListNode* newNode = new ListNode;
//             newNode->next = NULL;
//             newNode->val = val % 10;
            
//             if(!head)
//             {
//                 head = newNode;
//                 curr = newNode;
//             }
//             else
//             {
//                 curr->next = newNode;
//                 curr = newNode;
//             }
            
//             carry = val / 10;
//             l1 = l1->next;
//         }
        
//         while(l2)
//         {
//             val = l2->val + carry;
            
//             ListNode* newNode = new ListNode;
//             newNode->next = NULL;
//             newNode->val = val % 10;
            
//             if(!head)
//             {
//                 head = newNode;
//                 curr = newNode;
//             }
//             else
//             {
//                 curr->next = newNode;
//                 curr = newNode;
//             }
            
//             carry = val / 10;
//             l2 = l2->next;
//         }
        
//         if(carry)
//         {
//             ListNode* newNode = new ListNode;
//             newNode->next = NULL;
//             newNode->val = carry;
            
//             if(!head)
//             {
//                 head = newNode;
//                 curr = newNode;
//             }
//             else
//             {
//                 curr->next = newNode;
//                 curr = newNode;
//             }
//         }  
        
        return head;
    }
};
