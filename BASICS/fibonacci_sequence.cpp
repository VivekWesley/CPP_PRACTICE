// DATE: APRIL 12 2K21

// [Q]. print n fibonacci sequence.
// sample output:
// enter n value:
// enter n value:
// 10
// 0 1 1 2 3 5 8 13 21
// ___________________________________________________________

// #include <iostream>
// using namespace std;

// void fib(int n)
// {
//     int t1 = 0;
//     int t2 = 1;
//     int nextTerm;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << t1 << endl;
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return;
// }

// int main()
// {
//     int n;
//     cout << "enter n value: " << endl;
//     cin >> n;

//     fib(n);

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int generateFib(int n)
// {
//     int t1 = 0;
//     int t2 = 1;
//     int nextTerm = 0;

//     for (int i = 1; i < n; i++)
//     {
//         cout << t1 << endl;
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "enter n value: " << endl;
//     cin >> n;

//     cout << "fibonacci sequence: " << endl;
//     generateFib(n);
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int generateFib(int n)
// {
//     int t1 = 0;
//     int t2 = 1;
//     int nextTerm = 0;

//     for (int i = 1; i < n; i++)
//     {
//         cout << t1 << " ";
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cout << "enter n value: " << endl;
//     cin >> n;

//     generateFib(n);
//     return 0;
// }

// #3
#include <iostream>
using namespace std;

void generateFib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;

    cout << n << " Fibonacci sequence is: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int n;
    cout << "enter n value: " << endl;
    cin >> n;
    generateFib(n);
    return 0;
}