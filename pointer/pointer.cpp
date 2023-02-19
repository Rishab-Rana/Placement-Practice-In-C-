#include <iostream>
using namespace std;
int main() {
    
    int a = 10;
    int *ptr;
    ptr =&a;
    
    cout<<"address of a: "<<&a<<endl;
    cout<<"value in ptr: "<<ptr<<endl;
    cout<<"value of address in pointer: "<<*ptr<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;

    return 0;
}