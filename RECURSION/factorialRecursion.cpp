// DATE: JAN 12 2K21
// find factorial of n using recursion
// sample output :
// enter a nummber:
// 4
// ans: 24
// ___________________________________________________________________

// #1
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a nummber: " << endl;
//     cin >> n;
//     cout << "ans: " << factorial(n) << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "ans: " << factorial(n) << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "ans: " << factorial(n) << endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number :" << endl;
//     cin >> n;

//     cout << "ans: " << factorial(n) << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << "ans: " << factorial(n) << endl;

    return 0;
}