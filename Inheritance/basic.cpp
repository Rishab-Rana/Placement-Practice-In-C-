
#include <iostream>
using namespace std;

class parent{
    public:
    void func(){
        cout<<"inheritance";
    }
};

class child : public parent{
    
};

int main() {
  
  child x;
  x.func();
    return 0;
}