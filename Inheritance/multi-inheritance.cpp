
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

class grandchild : public child{

}

int main() {
  
  grandchild x;
  x.func();
    return 0;
}