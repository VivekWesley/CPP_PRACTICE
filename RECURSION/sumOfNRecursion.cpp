// DATE: JAN 13 2K21
// sum of n numbers using recursion
// ________________________________________

// sample output:
// enter n value:
// 4
// ans: 10

// #1
// #include <iostream>
// using namespace std;

// int sumOfN(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     int prevSum = sumOfN(n - 1);
//     return n + prevSum;
// }

// int main()
// {
//     int n;
//     cout << "enter n value: " << endl;
//     cin >> n;

//     cout << "ans: " << sumOfN(n) << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int sumOfN(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sumOfN(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "ans: " << sumOfN(n) << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int sumOfN(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sumOfN(n - 1);
// }

// int main()
// {
//     int n;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "ans: " << sumOfN(n) << endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int sumOfN(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sumOfN(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "ans: " << sumOfN(n) << endl;

//     return 0;
// }

// #5
// #include <iostream>
// using namespace std;

// int sumOfN(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sumOfN(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "ans: " << sumOfN(n) << endl;
//     return 0;
// }

// #6
#include <iostream>
using namespace std;

int sumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfN(n - 1);
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << "ans: " << sumOfN(n) << endl;
    return 0;
}
