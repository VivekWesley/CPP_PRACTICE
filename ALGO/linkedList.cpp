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
//     insertAtTail(head, 2);
//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 8);

//     display(head);

//     return 0;
// }

// #7
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
//     insertAtTail(head, 3);
//     insertAtTail(head, 5);
//     insertAtTail(head, 7);

//     display(head);

//     return 0;
// }

// #8
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
//     insertAtTail(head, 2);
//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 8);
//     insertAtTail(head, 10);

//     display(head);

//     return 0;
// }

// #9
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
//     insertAtTail(head, 5);
//     insertAtTail(head, 6);

//     display(head);
//     return 0;
// }

// #10
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

//     insertAtTail(head, 10);
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     insertAtTail(head, 5);

//     display(head);

//     return 0;
// }

// #11
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
//     insertAtTail(head, 3);
//     insertAtTail(head, 5);
//     insertAtTail(head, 7);
//     insertAtTail(head, 10);

//     display(head);

//     return 0;
// }

// #12
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
//     insertAtTail(head, 6);
//     insertAtTail(head, 8);
//     insertAtTail(head, 10);

//     display(head);

//     return 0;
// }

// #13
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

// void insertAttail(node *&head, int val)
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

//     insertAttail(head, 2);
//     insertAttail(head, 3);
//     insertAttail(head, 4);
//     insertAttail(head, 5);

//     display(head);

//     return 0;
// }

// #14
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
//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 10);
//     insertAtTail(head, 1);

//     display(head);

//     return 0;
// }

// #15
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

//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     insertAtTail(head, 5);
//     insertAtTail(head, 10);
//     insertAtTail(head, 100);

//     display(head);

//     return 0;
// }

// #16
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
//     insertAtTail(head, 10);
//     insertAtTail(head, 100);
//     insertAtTail(head, 1000);

//     display(head);

//     return 0;
// }

// #17
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

// void insertAttail(node *&head, int val)
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
//     insertAttail(head, 1);
//     insertAttail(head, 2);
//     insertAttail(head, 1000);
//     insertAttail(head, -23);
//     insertAttail(head, 43);

//     display(head);

//     return 0;
// }

// #18
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

//     insertAtTail(head, 20);
//     insertAtTail(head, 300);
//     insertAtTail(head, 122);
//     insertAtTail(head, 500);
//     insertAtTail(head, 10000);

//     display(head);

//     return 0;
// }

// #19
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
//     cout << "NULL";
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 100);
//     insertAtTail(head, 23);
//     insertAtTail(head, 54);
//     insertAtTail(head, -10);

//     display(head);

//     return 0;
// }

// #20
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

//     insertAtTail(head, 12);
//     insertAtTail(head, 45);
//     insertAtTail(head, 100);
//     insertAtTail(head, -37);
//     insertAtTail(head, 55);
//     insertAtTail(head, 79);

//     display(head);

//     return 0;
// }

// #21
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

//     insertAtTail(head, 3);
//     insertAtTail(head, 5);
//     insertAtTail(head, 6);
//     insertAtTail(head, 10);
//     insertAtTail(head, 23);

//     display(head);

//     return 0;
// }

// #22
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
//     insertAtTail(head, 5);
//     insertAtTail(head, 10);
//     insertAtTail(head, 100);
//     insertAtTail(head, 1000);
//     insertAtTail(head, 10000);

//     display(head);

//     return 0;
// }

// #23
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
//     insertAtTail(head, 3);
//     insertAtTail(head, 5);
//     insertAtTail(head, 7);
//     insertAtTail(head, 9);

//     display(head);

//     return 0;
// }

// #24
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

//     insertAtTail(head, 10);
//     insertAtTail(head, 20);
//     insertAtTail(head, 30);
//     insertAtTail(head, 40);
//     insertAtTail(head, 50);

//     display(head);

//     return 0;
// }

// #25
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
//     insertAtTail(head, 2);
//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 8);
//     insertAtTail(head, 10);

//     display(head);

//     return 0;
// }

// #26
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
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     insertAtTail(head, 7);
//     insertAtTail(head, 10);
//     display(head);

//     return 0;
// }

// #27
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
//     insertAtTail(head, 3);
//     insertAtTail(head, 100);
//     insertAtTail(head, 34);
//     insertAtTail(head, 43);
//     insertAtTail(head, 50);
//     insertAtTail(head, 0);

//     display(head);

//     return 0;
// }

// #28
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

//     insertAtTail(head, 4);
//     insertAtTail(head, 3);
//     insertAtTail(head, 2);
//     insertAtTail(head, 1);
//     insertAtTail(head, 0);

//     display(head);

//     return 0;
// }

// #29
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
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     insertAtTail(head, 5);
//     insertAtTail(head, 6);
//     insertAtTail(head, 7);
//     insertAtTail(head, 8);

//     display(head);

//     return 0;
// }

// #30
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
//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 0);
//     insertAtTail(head, 10);
//     insertAtTail(head, 100);

//     display(head);

//     return 0;
// }

// #31
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
//     cout << "NULL";
// }

// int main()
// {
//     node *head = NULL;

//     insertAtTail(head, 2);
//     insertAtTail(head, 19);
//     insertAtTail(head, 33);
//     insertAtTail(head, 69);
//     insertAtTail(head, 45);
//     insertAtTail(head, 98);

//     display(head);

//     return 0;
// }

// #32
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

//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 7);
//     insertAtTail(head, 8);
//     insertAtTail(head, 0);
//     insertAtTail(head, 99);

//     display(head);

//     return 0;
// }

// #33
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
//     insertAtTail(head, 34);
//     insertAtTail(head, 23);
//     insertAtTail(head, 43);
//     insertAtTail(head, 54);
//     insertAtTail(head, 44);

//     display(head);

//     return 0;
// }

// #34
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

//     insertAtTail(head, 43);
//     insertAtTail(head, 44);
//     insertAtTail(head, 98);
//     insertAtTail(head, 90);
//     insertAtTail(head, 3333);

//     display(head);

//     return 0;
// }

// #35
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
//     cout << "NULL";
// }

// int main()
// {
//     node *head = NULL;

//     insertAtTail(head, 3);
//     insertAtTail(head, 10);
//     insertAtTail(head, 32);
//     insertAtTail(head, 64);
//     insertAtTail(head, 90);

//     display(head);

//     return 0;
// }

// #36
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

//     insertAtTail(head, 4);
//     insertAtTail(head, 3);
//     insertAtTail(head, 2);
//     insertAtTail(head, 1);
//     insertAtTail(head, 0);

//     display(head);

//     return 0;
// }

// #37
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

    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 0);

    display(head);

    return 0;
}