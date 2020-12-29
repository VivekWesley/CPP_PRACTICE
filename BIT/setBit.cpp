// DATE: DEC 29 2020
// set bit 1 at given pos and return result.
// ____________________________________________

//  sample output:
// 7

// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }

// int main()
// {
//     cout << setBit(5, 1) << endl;

//     return 0;
// }

// #1
// sample output:
// enter a number:
// 5
// enter position:
// 1
// ans: 7

// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {

//     return (n | (1 << pos));
// }

// int main()
// {
//     int n;
//     int pos;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "enter position: " << endl;
//     cin >> pos;

//     int ans = setBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }

// int main()
// {
//     int n, pos;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter pos: " << endl;
//     cin >> pos;

//     int ans = setBit(n, pos);
//     cout << "ans is: " << ans << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }

// int main()
// {
//     int n, pos;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter a pos: " << endl;
//     cin >> pos;

//     int ans = setBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #4

// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }

// int main()
// {
//     int n, pos;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter a pos: " << endl;
//     cin >> pos;

//     int ans = setBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    int n, pos;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << "enter a pos: " << endl;
    cin >> pos;

    int ans = setBit(n, pos);
    cout << "ans: " << ans << endl;

    return 0;
}