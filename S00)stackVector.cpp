#include<iostream>
#include<vector>
#include<list>
using namespace std;


class stack{
    vector <int> vect;
    
public:
    
   void push(int val) {
       vect.push_back(val);
   }
   
   void pop() {
       vect.pop_back();
   }
   
   int top() {
       return vect[vect.size()-1];
   }
   
   bool isEmpty() {
       return vect.size() == 0;
   }
};

int main() {
    stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
  
    
    while(!s.isEmpty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
