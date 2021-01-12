// DATE: JAN 12 2K21
// ____________________________________________

// find nth fibo number using recursion
// sample ouput:
// enter a number:
// 6
// ans: 8

// #1
// #include <iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "ans: " << fibonacci(n) << endl;
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "ans: " << fib(n) << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "ans: " << fib(n) << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "ans: " << fib(n) << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << "ans: " << fib(n) << endl;

    return 0;
}