#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
Node* deleteNode(Node* head, Node* target){
    if(head==target) {
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;

    return head;
}
Node* deleteNodeVal(Node* head, int targetval){
    if(head->val==targetval) {
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetval){
        temp=temp->next;
    }
    temp->next=temp->next->next;

    return head;
}
int main()
{
    
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next =c;
    c->next =d;
    d->next =e;
    Node* head=a;
    display(head);
    // deleteNode(a, d);   //if we want to delete  the node
    //  head = deleteNode(head, a);
    head = deleteNodeVal(head, 30);  //if we want to delete a node val
    display(head);

}





// leetcode 237 problem number

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };