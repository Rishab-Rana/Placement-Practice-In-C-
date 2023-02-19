#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n = 5, a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    // using vector itrator
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr;
    }
    cout << endl;

    // using element of vector
    for (auto element : v)
    {
        cout << element;
    }
    return 0;
}