// DATE: JAN 25 2K21
// __________________________________________________________

// print all possible words from phone digits(keypad problem)
// sample output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

// #include <iostream>
// using namespace std;

// string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// void keypad(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keypadArr[ch - '0'];
//     string ros = s.substr(1);

//     for (int i = 0; i < code.length(); i++)
//     {
//         keypad(ros, ans + code[i]);
//     }
// }
// int main()
// {
//     keypad("23", "");
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// void keypad(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keypadArr[ch - '0'];
//     string ros = s.substr(1);

//     for (int i = 0; i < code.length(); i++)
//     {
//         keypad(ros, ans + code[i]);
//     }
// }

// int main()
// {
//     keypad("45", "");
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// void keypad(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keypadArr[ch - '0'];
//     string ros = s.substr(1);

//     for (int i = 0; i < code.length(); i++)
//     {
//         keypad(ros, ans + code[i]);
//     }
// }
// int main()
// {
//     keypad("23", "");
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// void keypad(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }

//     char ch = s[0];
//     string code = keypadArr[ch - '0'];
//     string ros = s.substr(1);

//     for (int i = 0; i < code.length(); i++)
//     {
//         keypad(ros, ans + code[i]);
//     }
// }
// int main()
// {
//     keypad("23", "");
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// void keypad(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keypadArr[ch - '0'];
//     string ros = s.substr(1);

//     for (int i = 0; i < code.length(); i++)
//     {
//         keypad(ros, ans + code[i]);
//     }
// }

// int main()
// {
//     keypad("12", "");
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{
    keypad("23", "");
    return 0;
}