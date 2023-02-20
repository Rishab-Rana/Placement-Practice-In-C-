
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
};

int main() {
  
  student arr[3];
  
  for(int i=0;i<3;i++){
      cout<<"enter "<<i+1<<" Roll Nmber:";
      cin>>arr[i].rollNo;
      cout<<"enter name:";
      cin>>arr[i].name;
      cout<<"enter your course:";
      cin>>arr[i].course;
      
      cout<<"__________________________________"<<endl;
  }
  
    for(int i=0;i<3;i++){
        arr[i].printInfo();
        cout<<"________________________________"<<endl;
    }
    return 0;
}