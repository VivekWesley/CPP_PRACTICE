// DATE: JAN 03 2021
// _____________________________________________________________

// count the number of 1s  in binary representation of a number

// sample output:
// enter a number:
// 19
// ans: 3

// #1
// #include <iostream>
// using namespace std;

// int numberOfOnes(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout << "enter a number:" << endl;
//     cin >> n;
//     int ans = numberOfOnes(n);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int numberOf1s(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     int ans = numberOf1s(n);

//     cout << "ans: " << ans << endl;
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int numberOf1s(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     int ans = numberOf1s(n);
//     cout << "ans:  " << ans << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int numberOf1s(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;

//     cin >> n;
//     int ans = numberOf1s(n);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #5
// #include <iostream>
// using namespace std;

// int numberOf1s(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     int ans = numberOf1s(n);
//     cout << "ans: " << ans << endl;

//     return 0;
// }

// #6
#include <iostream>
using namespace std;

int numberOf1s(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    int ans = numberOf1s(n);
    cout << "ans: " << ans << endl;

    return 0;
}
