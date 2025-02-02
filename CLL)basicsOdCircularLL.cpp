#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
    
};

class circularLL {
    Node* head;
    Node* tail;

public:
    circularLL() {
        head=tail=NULL;
    }
    
    void insertAtStart(int val) {
        Node* newNode = new Node(val);
        if(head==NULL) {
            head=tail=newNode;
            tail->next=head;
        }
        else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    
    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head=tail=newNode;
            tail->next = head;
        }
        else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }
    
    void deleteAtHead() {
        
        if(head == NULL) {
            return;
        }
        
        else if(head == tail) {
            delete head;
            head=tail=NULL;
        }
        else {
            Node* temp=head;
        head=head->next;
        tail->next=head;
        
        temp->next = NULL;
        delete temp;
        }
    }
    
    void deleteAtEnd() {
        if(head == NULL) {
            return;
        } else if(head==tail){
            delete head;
            head=tail=NULL;
        }else {
            Node* temp = tail;
            Node* prev=head;
            while(prev->next != tail){
                prev=prev->next;
            }
            tail = prev;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    
    void display() {
        if(head == NULL) {
            cout<<"ll is empty";
            return;
        }
       cout<<head->data<<"->";
       Node* temp = head->next;
        while(temp != head) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data;
    }
};

int main() {
    circularLL cll;
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    
    cll.insertAtTail(5);
    cll.insertAtTail(8);
    
    cll.deleteAtHead();
    cll.deleteAtHead();
   
   cll.deleteAtEnd();
   cll.deleteAtEnd();
   
    
    cll.display();
}
