#include <iostream>
#include <string>
#include <algorithm> //to use sort function algorithm header file must be included
using namespace std;
int main() {
string s1 ="ssiosjanoaxainkncsncon";
sort(s1.begin(),s1.end()); //begin() and end() will tell the sort function to sort from start to end.
cout<<s1;
    return 0;
}