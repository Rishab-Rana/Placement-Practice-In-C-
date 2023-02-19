#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 vector<int> v;
 vector<int> :: iterator itr;
 int n=5,a;
 for(int i=0;i<n;i++){
     cin>>a;
     v.push_back(a);
 }

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
    return 0;
}