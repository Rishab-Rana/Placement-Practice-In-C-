// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    short int firstNumber,secoundNumber,sum,minus,div,mult;
    char button;
    cout << "enter the first number"<<endl;
    cin>>firstNumber;
    cout << "enter the Secound number"<<endl;
    cin>>secoundNumber;
    cout<< "press a for addition"<<endl;
    cout<< "press s for subtraction"<<endl;
    cout<<"press m for multipication"<<endl;
    cout<<"press d for division"<<endl;
    cin>>button;
    switch(button)
    {
        case 'a':
            {
                sum =firstNumber+secoundNumber;
                cout<<"sum of Number is : "<<sum;
                break;
            }
        case 's':
            {
                minus =firstNumber-secoundNumber;
                cout<<"subtraction of Number is : "<<minus;
                break;
            }
        case 'm':
            {
                mult=firstNumber*secoundNumber;
                cout<<"sum of Number is : "<<mult;
                break;
            }
        case 'd':
            {
                div =firstNumber%secoundNumber;
                cout<<"sum of Number is : "<<div;
                break;
            }
    }
    return 0;
}~