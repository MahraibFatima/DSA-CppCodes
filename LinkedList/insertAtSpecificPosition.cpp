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
        cout << temp->value << endl;
        temp = temp->ptr;
    }
}
void afterNode(Node *previous, int newValue)
{
    if (previous == NULL)
    {
        cout << "Previous Can't be NULL" << endl;
    }//Check if node is Null

    Node *newNode = new Node;
    newNode->value= newValue;  //Create a new node

    newNode->ptr = previous->ptr;
    previous->ptr = newNode;    //insert newNode after previous node
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    cout << "Enter any three values:";

    cin >> head->value;
    head->ptr = second;

    cin >> second->value;
    second->ptr = third;

    cin >> third->value;
    third->ptr = NULL;

    cout << "Before Insertion: " << endl;
    printList(head);

    int num = 0;
    cout << "Enter the value: ";
    cin >> num;

    afterNode(head, num); // second == specific previous..

    cout << "After insertion: " << endl;
    printList(head);

    return 0;
}