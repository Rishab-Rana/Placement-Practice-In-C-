#include <iostream>

using namespace std;

class Student{
    public:
   virtual void display(){
        cout<<"based class display function"<<endl;
    }
    void print(){
        cout<<"based class print function"<<endl;
    }
};

class Student2: public Student{
      public:
    void display(){
        cout<<"based class display function"<<endl;
    }
    void print(){
        cout<<"based class print function"<<endl;
    }
};

int main() {
    Student *baseptr;
    Student2 d;
    
    baseptr -> print();
    baseptr ->display();
    return 0;
}