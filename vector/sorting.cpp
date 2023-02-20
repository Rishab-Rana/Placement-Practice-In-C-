#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   
vector<int> v{1,5,6,8,4,5,6,9,4,5,8};

for(auto element:v){
    cout<<element<<" ";
}
cout<<endl;

vector<int>:: iterator itr;

sort(v.begin(),v.end(), greater<int>()); //greater <int>() is used for soring in decending order

for(auto element:v){
    cout<<element<<" ";
}
    return 0;
}