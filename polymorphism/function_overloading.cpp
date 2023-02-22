#include <iostream>

using namespace std;

class Student{
    public:
    
    void fun(){
        cout<<"function with no argument"<<endl;
    }
    void fun(int x){
        cout<<"function with int argument"<<endl;
    }
    void fun(double x)
    {
        cout<<"function with double argument"<<endl;
    }
};

int main() {
    int x = 10;
    double y=20;
    Student func;
    func.fun();
    func.fun(x);
    func.fun(y);
    return 0;
}