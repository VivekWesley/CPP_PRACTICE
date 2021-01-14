// DATE: JAN 14 2K21
// _______________________________________________

// calculate n raised to power p using recursion
// sample output:
// enter number:
// 4
// enter power:
// 3
// ans: 64

// #1
// #include <iostream>
// using namespace std;

// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }

//     int prevPower = power(n, p - 1);
//     return n * prevPower;
// }

// int main()
// {
//     int n;
//     int p;

//     cout << "enter number: " << endl;
//     cin >> n;
//     cout << "enter power: " << endl;
//     cin >> p;

//     cout << "ans: " << power(n, p) << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prevPower = power(n, p - 1);
//     return n * prevPower;
// }

// int main()
// {
//     int n;
//     int p;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter power: " << endl;
//     cin >> p;
//     cout << "ans: " << power(n, p) << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prevPower = power(n, p - 1);

//     return n * prevPower;
// }

// int main()
// {
//     int n;
//     int p;

//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter power: " << endl;
//     cin >> p;
//     cout << "ans: " << power(n, p) << endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prevPower = power(n, p - 1);
//     return n * prevPower;
// }

// int main()
// {
//     int n;
//     int p;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "enter power: " << endl;
//     cin >> p;

//     cout << "ans: " << power(n, p) << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevPower = power(n, p - 1);
    return n * prevPower;
}

int main()
{
    int n, p;
    cout << "enter a number: " << endl;
    cin >> n;
    cout << "enter power: " << endl;
    cin >> p;

    cout << "ans: " << power(n, p) << endl;

    return 0;
}
