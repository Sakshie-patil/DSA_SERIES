#include <iostream>
using namespace std;

// create a class for single node
class node {
    public:
        int data;
        node* next;
        
        
        node(int val) {
            data = val;
            next = NULL;
        }
};

//now create the whole linked list
class list {
    node* head;
    node* tail;
    
public:
    
    list() {
        head=tail=NULL;
    }
    
    //inserts value in front
    void push_front(int val) {     //0(1)
        node* newNode = new node(val);
        if(head==NULL) {
            head = tail = newNode;
            return;
        }else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    //insert value in end
    void push_back(int val) {     //0(1)
        node* newNode = new node(val);
        if(head==NULL) {
            head=tail=newNode;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    //removes element from front
    void pop_front() {     //0(1)
        if(head == NULL) {
            cout<<"linked list in empty";
        } else {
            node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    
    //removes element from end
    void pop_back() {     //0(n)
        if(head==NULL) {
            cout<<"Linked list is empty";
            return;
        }
        
        node* temp = head;
        while( temp -> next != tail) {
            temp = temp -> next;
        }
        
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    
    //insert at any guven position
    void insert(int val,int pos) {     //0(n)
        if(pos<0) {
            cout<<"invalid position";
            return;
        }
        if(pos==0) {
            push_front(val);
        }
        node* temp = head;
        for(int i=0;i<pos-1;i++) {
            if(temp == NULL) {
                cout<<"invalid pos";
            }
            temp = temp->next;
        }
        node* newNode = new node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    //print the linkedList
    void printLL() {     //0(n)
        node* temp = head;
        
        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    //search for the particular key
    int search(int key) {
        node* temp = head;
        int idx=0;
        
        while(temp != NULL) {
            if(temp->data == key) {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        
        return -1;
    }
};

int main() {

    // call the function one by one
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.push_back(4);
    
    ll.pop_front();
    
    ll.pop_back();
    
     ll.insert(4,1);

    ll.search(1);
    
    ll.printLL();
    
    
}
