// DATE : DEC 28 2020
// ____________________________________________

// bit manipulation print bit at given position.
// sample output:
// enter a number:
// 12
// enter position:
// 0
// ans:0

// ____________________________________________
// #1
// #include <iostream>
// using namespace std;

// int getBit(int n, int pos)
// {
//     return (n & (1 << pos)) != 0;
// }

// int main()
// {
//     int n;
//     int pos;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter position: " << endl;
//     cin >> pos;

//     int ans = getBit(n, pos);
//     cout << "ans:" << ans << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int getBit(int n, int pos)
// {
//     return (n & (1 << pos)) != 0;
// }

// int main()
// {
//     int n;
//     int pos;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "enter position: " << endl;
//     cin >> pos;

//     int ans = getBit(n, pos);

//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int getBit(int n, int pos)
// {
//     return (n & (1 << pos)) != 0;
// }
// int main()
// {
//     int n;
//     int pos;
//     cout << "enter a nmber: " << endl;
//     cin >> n;

//     cout << "enter position: " << endl;
//     cin >> pos;

//     int ans = getBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int getBit(int n, int pos)
// {
//     return (n & (1 << pos)) != 0;
// }

// int main()
// {
//     int n, pos;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "enter position: " << endl;
//     cin >> pos;

//     int ans = getBit(n, pos);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int main()
{
    int n, pos;

    cout << "enter number: " << endl;
    cin >> n;

    cout << "enter position: " << endl;
    cin >> pos;

    int ans = getBit(n, pos);
    cout << "ans: " << ans << endl;

    return 0;
}