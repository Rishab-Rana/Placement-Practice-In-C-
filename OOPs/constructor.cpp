#include <iostream>
using namespace std;

class student{
    public:
  int rollNo;
  string name;
  string course;
  
  void printInfo(){
      cout<<rollNo<<" "<<name<<" "<<course;
      cout<<endl;
  }
  
  void getname()
  {
      cout<<name;
  }
  
  student(int x,string s,string y)
  {
      name=s;
      rollNo=x;
      course=y;
  }
};

int main() {
  
  student a(1,"rishab","MCA");
  a.printInfo();
    return 0;
}