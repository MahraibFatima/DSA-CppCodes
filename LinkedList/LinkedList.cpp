#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *ptr;//store the address of next ``node
};

void printlist(node *n)
{
    while (n != NULL)
    {
        cout << "Value: " << n->value << endl;
        n = n->ptr;
    }
}

int main()
{
    node *head;
    head = new node();
    node *second = new node();
    node *third = new node();

    cout << "Enter a value: ";
    cin >> head->value;
    head->ptr = second;

    cout << "Enter a value: ";
    cin >> second->value;
    second->ptr = third;

    cout << "Enter a value: ";
    cin >> third->value;
    third->ptr = NULL;

    printlist(head);
}