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
int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

void revDisplay(Node *head)
{
    if (head == NULL)
        return;
    revDisplay(head->next);
    cout << head->val << " ";
}

void displayrec(Node *head)
{
    if (head == NULL)
        return;               // base case
    cout << head->val << " "; // kaam
    displayrec(head->next);   // call
}
void insertAtEnd(Node* head, int val){
    Node* temp = new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next = temp;
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

    //cout<<a->next->next->next->val;
    display(a);
    insertAtEnd(a, 80);
     display(a);
    // revDisplay(a);
    //displayrec(a);
    //cout<<size(a);
}