// normal claases and objects demo also called as encapsulation
#include <iostream>
#include <string>
using namespace std;

class student {
    
public:
    //properties
    int id;
    string name;
    float cgpa;
    
    student(int id,string name,float cgpa) {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
    }
    
    //functions
    void getInfo() {
        cout<<"id: "<<id<<endl;
        cout<<"name: "<< name<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
    }
};

int main() {
    //object creation
    student s1(1,"sakshi",9.35);
    s1.getInfo();
}



//concept of inheritance
#include <iostream>
#include <string>
using namespace std;

class person {
    public:
    //properties
    string name;
    int age;
    
    person() {
        
    }    
};
    
    //inheritance
    class student : public person {
        public:
        int rollno;
        
        void getInfo() {
             cout<<"name: "<<name<<endl;
                cout<<"age: "<<age<<endl;
                cout<<"rollno: "<<rollno<<endl;
            
        }
    };
    
    
    int main() {
        student s1;
        s1.name="sakshi";
        s1.age=19;
        s1.rollno=42;
        s1.getInfo();
        
    }
    
