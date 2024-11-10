//---------------------LeetCode 61---------------------------------

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//      if(head == NULL || head->next == NULL) return head;   
//      ListNode* temp = head;
//      ListNode* tail=NULL;
//      int len=0;
//      while(temp != NULL){
//         if(temp->next == NULL) tail=temp;
//         temp=temp->next;
//          len++;
//      }
//     k=k%len;
//     if(k==0) return head;
//     int idx = len-k-1;
//      temp=head;
//        for(int i=1;i<=idx;i++){
//         temp = temp->next;
//        } 
//        tail->next = head;
//        head = temp->next;
//        temp->next=NULL;
//     return head;
//     }
// };