// DATE: JAN 19 2K21
// ___________________________________________________

// replace pi with 3.14 in string using recursion
// sample output:
// 3.14ppxxp3.14ixi3.14

// #1
// #include <iostream>
// using namespace std;

// void replacepi(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         cout << "3.14";
//         replacepi(s.substr(2));
//     }
//     else
//     {
//         cout << s[0];
//         replacepi(s.substr(1));
//     }
// }

// int main()
// {
//     replacepi("pippxxppiixipi");
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void replacePi(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         cout << "3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }
// int main()
// {
//     cout << "ans: " << endl;
//     replacePi("pippxxppiixipi");
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void replacePi(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }

//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         cout << "3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout << s[0];
//         replacePi(s.substr(1));
//     }
// }

// int main()
// {
//     replacePi("pippxxppiixipi");
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void replacePi(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         cout << "3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout << s[0];
//         replacePi(s.substr(1));
//     }
// }

// int main()
// {
//     replacePi("pippxxppiixipi");
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

void replacePi(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main()
{
    replacePi("pippxxppiixipi");
    return 0;
}