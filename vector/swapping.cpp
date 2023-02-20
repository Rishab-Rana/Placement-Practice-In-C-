
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    vector <int> v1(3,50);
    vector <int> v2(3,20);
    
    for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }
    cout<<endl;
    swap(v1,v2);
    
     for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }
    return 0;
}