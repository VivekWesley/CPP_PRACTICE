// clear a bit at given pos.

// sample output:
// 2

// #include <iostream>
// using namespace std;

// int clearBit(int n, int pos)
// {
//     return (n & (~(1 << pos)));
// }
// int main()
// {
//     cout << clearBit(3, 0);

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }

// int main()
// {
//     int n, pos;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter a pos: " << endl;
//     cin >> pos;

//     int ans = clearBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;
// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }

// int main()
// {
//     int n, pos;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter a pos: " << endl;
//     cin >> pos;

//     int ans = clearBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }

// int main()
// {
//     int n, pos;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter a pos: " << endl;
//     cin >> pos;

//     int ans = clearBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }

// int main()
// {
//     int n, pos;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "enter a pos: " << endl;
//     cin >> pos;

//     int ans = clearBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int main()
{
    int n, pos;

    cout << "enter a number: " << endl;
    cin >> n;
    cout << "enter a pos: " << endl;
    cin >> pos;

    int ans = clearBit(n, pos);
    cout << "ans: " << ans << endl;

    return 0;
}
