// DATE: JUN 13 2K21
// topic: vector data structure and usage
// _________________________________________________________

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "method: 1" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << "method: 2 <using vector iterator>" << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "method: 3 <using auto keyword>" << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }

    cout << "pop_back function" << endl;
    v.pop_back();

    vector<int> v2(4, 50);
    // or
    // v2.push_back(50);
    // v2.push_back(50);
    // v2.push_back(50);

    swap(v, v2);

    cout << "vector: v" << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }

    cout << "vector: v2" << endl;
    for (auto element : v2)
    {
        cout << element << endl;
    }

    return 0;
}