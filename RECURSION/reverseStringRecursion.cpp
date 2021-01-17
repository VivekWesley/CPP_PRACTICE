// DATE: JAN 17 2K21
// reverse a given string using recursion
// _______________________________________

// sample output:
// k
// e
// v
// i
// v

// #1
// #include <iostream>
// using namespace std;

// void reverse(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout << s[0] << endl;
// }

// int main()
// {
//     string s = "vivek";
//     reverse(s);

//     return 0;
// }

// #2
// #include <iostream>

// using namespace std;

// void reverse(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }

//     string ros = s.substr(1);
//     reverse(ros);
//     cout << s[0];
// }

// int main()
// {
//     string s;
//     cout << "enter a string: " << endl;
//     cin >> s;
//     cout << "ans: " << endl;
//     reverse(s);
//     cout << endl;
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void reverse(string s)
// {

//     if (s.length() == 0)
//     {
//         return;
//     }

//     string ros = s.substr(1);
//     reverse(ros);
//     cout << s[0];
// }
// int main()
// {
//     string s = "JOHN";
//     reverse(s);
//     cout << endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void reverse(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }

//     string ros = s.substr(1);
//     reverse(ros);
//     cout << s[0];
// }
// int main()
// {
//     string s = "VIVEK";
//     reverse(s);
//     cout << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{
    string s = "vivek";
    reverse(s);
    cout << endl;
    return 0;
}