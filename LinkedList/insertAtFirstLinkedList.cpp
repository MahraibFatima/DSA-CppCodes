#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *ptr;
};
void insertAtFirst(Node **head, int val)
{
    Node *newnode = new Node; // Node()
    newnode->value = val;
    newnode->ptr = *head;

    *head = newnode;
}

void printList(Node *temp)
{
    while (temp != NULL)
    {
        cout << " " << temp->value << endl;
        temp = temp->ptr;
    }
}
int main()
{
    Node *head = new Node;   // Node()
    Node *second = new Node; // Node()
    Node *third = new Node;  // Node()

    cout << "Enter value: " << endl;
    cin >> head->value;
    head->ptr = second;

    cin >> second->value;
    second->ptr = third;

    cin >> third->value;
    third->ptr = NULL;

    cout << "Before insertion: " << endl;
    printList(head);

    int num = 0;
    cout << "Enter a value at the first: ";
    cin >> num;
    insertAtFirst(&head, num);

    cout << "After insertion: " << endl;
    printList(head);
    return 0;
}
