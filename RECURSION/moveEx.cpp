// DATE: JAN 22 2K21
// ________________________________________________
// move all 'x' to the end of the string.

// sample output:
// abdcefhixxxxx

// #1
// #include <iostream>
// using namespace std;

// string moveallX(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallX(s.substr(1));
//     if (ch == 'x')
//     {
//         return (ans + ch);
//     }
//     return ch + ans;
// }

// int main()
// {
//     cout << moveallX("axxbdxcefxhix");
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// string moveallX(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallX(s.substr(1));

//     if (ch == 'x')
//     {
//         return (ans + ch);
//     }
//     return (ch + ans);
// }

// int main()
// {
//     cout << moveallX("axxbdxcefxhix") << endl;
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// string moveallX(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallX(s.substr(1));
//     if (ch == 'x')
//     {
//         return (ans + ch);
//     }
//     return (ch + ans);
// }

// int main()
// {
//     cout << "original string:" << endl
//          << "axxbdxcefxhix " << endl;
//     cout << moveallX("axxbdxcefxhix") << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// string moveallX(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallX(s.substr(1));
//     if (ch == 'x')
//     {
//         return (ans + ch);
//     }
//     return ch + ans;
// }

// int main()
// {
//     cout << moveallX("axxbdxcefxhix") << endl;
//     return 0;
// }

// #5
// #include <iostream>
// using namespace std;

// string moveallX(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallX(s.substr(1));

//     if (ch == 'x')
//     {
//         return (ans + ch);
//     }
//     return (ch + ans);
// }

// int main()
// {
//     cout << moveallX("axxbdxcefxhix") << endl;
//     return 0;
// }

// #6
#include <iostream>
using namespace std;

string moveAllX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveAllX(s.substr(1));

    if (ch == 'x')
    {
        cout << ans + ch << " ";
    }
    else
    {
        cout << ch + ans << " ";
    }
    return "";
}

int main()
{
    string str = "";
    cout << "enter a string: " << endl;
    cin >> str;

    moveAllX(str);

    return 0;
}