// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val) {
        data = val;
        next=prev=NULL;
    }
};

class doublyLL{
    
    node* head;
    node* tail;
 
 public:   
    doublyLL() {
        head=tail=NULL;
    }
    
    void push_front(int val) {
        node* newNode = new node(val);
        
        //ll is empty
        if(head == NULL) {
            head = tail = newNode;
        }
        //ll is not empty
        else {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    
    void push_back(int val) {
        node* newNode = new node(val);
        
        if(head==NULL) {
            head=tail=newNode;
        } else {
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    
    void pop_front() {
        
        if(head==NULL) {
            cout<<"LL is empty";
            return;
        }
        node* temp = head;
        head = head->next;
        if(head != NULL) {
             head->prev = NULL;
        }
        
        temp->next = NULL;
        delete temp;
    }
    
    void pop_back() {
        if(head == NULL) {
            cout<<"linked list is empty";
            return;
        }
        node* temp = tail;
        tail = tail->prev;
        
        if(tail != NULL) {
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }
    
    void display() {
        node* temp=head;
        while(temp != NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};


int main() {
    doublyLL dll;
    dll.push_front(1);
     dll.push_front(2);
      dll.push_front(3);
      
      dll.push_back(4);
      
      dll.pop_front();
      
      dll.pop_back();
    
    
    dll.display();
}
