#include<iostream>
using namespace std;

// add function defination
void add(int x, int y)
{
    int result;
    result=x+y;
    cout<<"the sum of two number is "<<result<<endl;
}
void subtract(int x, int y)
{
    int result;
    result=x-y;
    cout<<"the subtract of two number is "<<result<<endl;
}


int main(){

    int first,second;
    cin>>first>>second;
    add(first,second);
    subtract(first,second);
}