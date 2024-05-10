#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *ptr;
};
void printList(Node *temp)
{

    while (temp != NULL)
    {
        cout << temp->value <<endl;
        temp = temp->ptr;
    }
}

void insertAtLast(Node **head, int newValue)
{
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->ptr = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    Node *last = *head;
    while (last->ptr != NULL)
    {
        last = last->ptr;
    }
    last->ptr = newNode;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    cout << "Enter 3 Values: ";

    cin >> head->value;
    head->ptr = second;

    cin >> second->value;
    second->ptr = third;

    cin >> third->value;
    third->ptr = NULL;

    cout << "Before insertion: " << endl;
    printList(head);

    int num = 0;
    cout << "Enter value to add it last: ";
    cin >> num;

    insertAtLast(&head, num);

    cout << "After insertion: " << endl;
    printList(head);
    return 0;
}