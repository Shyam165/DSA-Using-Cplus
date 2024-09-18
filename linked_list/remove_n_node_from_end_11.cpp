class Solution{
    public:


    //1st method:---------------

//   ListNode* middleNode(ListNode* head, int n){

//     int len=0;
//     ListNode* temp = head;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     if(n==len){
//         head=head->next;
//         return head;
//     }

//     int m = len-n+1;
//     int idx = m-1;
//     temp = head;
//     for(int i=1;i<=idx-1;i++){
//         temp=temp->next;
//     }
//     temp->next= temp->next->next;
//     return head;
//   } 


//2nd method----------------


//   ListNode* middleNode(ListNode* head, int n){
ListNode* slow = head;
ListNode* fast = head;
for(int i=1;i<=n+1;i++){
    if(fast==NULL) return head->next;
    fast=fast->next;
}

while(fast!=NULL){
    slow = slow->next;
    fast = fast->next;
}

slow->next = slow->next->next;
return head;
//   } 





 };