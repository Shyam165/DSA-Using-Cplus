class Solution{
    public:


    //1st method:---------------

//   ListNode* middleNode(ListNode* head){
//     int len=0;
//     ListNode* temp = head;
//     while(temp!=NULL){
//         len++;
//     }
//     ind midIdx = len/2;
//     ListNode* mid=head;
//     for(int i=1;i<=midIdx;i++){
//         mid=mid->next;
//     }
//     return mid;
//   }   

//2nd method----------------
  ListNode* middleNode(ListNode* head){
    ListNode* slow=head;
    ListNode* fast = head;
    while(fast!= NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
  }  
};