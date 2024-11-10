#include<iostream>
using namespace std;
class Node{     //user defined data structure
    public:
    int val;
    Node* next;
    Node (int val){
        this->val=val;
        this->next=NULL;
    }

};

class LinkedList{
    public:
    Node * head;
    Node * tail;
    int size=0;

    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size ==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
      void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size ==0) head=tail=temp;
        else{
           temp->next=head;
           head=temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
    else if(idx==0) insertAtHead(val);
    else if(idx==size) insertAtTail(val);
    else {
        Node* t = new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next =temp->next;
        temp->next=t;
        size++;
    }
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"List is empty!";
            return;
        }
        head=head->next;
        size--;
    }

    void deletAtTail(){
        if(size==0) {
            cout<<"List is empty!";
            return;
        }
         Node* temp =head;
         while (temp->next != tail)
         {
            temp=temp->next;
         }
         temp->next=NULL;
         tail = temp;
         size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        else if(idx<0 || idx>size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deletAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList l1;
    l1.insertAtTail(10);
    l1.display();
    l1.insertAtTail(20);
    l1.display();
    l1.insertAtTail(30);
    l1.display();
     l1.insertAtTail(40);
    l1.display();
    // cout<<l1.size;
    l1.insertAtHead(5);
      l1.display();
    l1.insertAtIdx(4, 80);
    l1.display();
    l1.deleteAtHead();
    l1.display();
    l1.deletAtTail();
    l1.display();
    l1.deleteAtIdx(2);
    l1.display();
}