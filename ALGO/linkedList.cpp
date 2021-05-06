// DATE: APRIL 30 2K21
//_________________________________________________________________________
// Linked List
// sample output:
// 1->2->3->NULL
// ________________________________________________________________________

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);
//     display(head);

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " --> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);

//     display(head);

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 6);
//     insertAtTail(head, 9);
//     insertAtTail(head, 2);

//     display(head);
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);

//     display(head);

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 2);
//     insertAtTail(head, 4);
//     insertAtTail(head, 8);
//     insertAtTail(head, 100);

//     display(head);

//     return 0;
// }

// #5
// #include <iostream>
// using namespace std;

// class node
// {

// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;

//     insertAtTail(head, 1);
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);

//     display(head);
//     return 0;
// }

// #6
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    insertAtTail(head, 6);
    insertAtTail(head, 8);

    display(head);

    return 0;
}