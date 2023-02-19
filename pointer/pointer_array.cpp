// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int a = 10;
    int *ptr;
    ptr =&a;
    cout<<"address befour operation"<<ptr<<endl;
    
    // increment
    ptr++;
    cout<<"after increment"<<ptr<<endl;
    
    // decrement
    ptr--;
    cout<<"after decrement"<<ptr<<endl;
    
    // addition
    ptr+=4;
    cout<<"after addition"<<ptr<<endl;
    
    // subtraction
    ptr-=4;
    cout<<"after subtraction"<<ptr<<endl;

    return 0;
}