// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* cur =  head;
//         ListNode* after = head;
//         while(cur){
//             after=cur->next;
//             cur->next = prev;
//             prev=cur;
//             cur=after;
//         }
//         return prev;
        
//     }
// };