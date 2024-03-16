// Insert a new node at the start of a linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *insertAtBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{
    Node *head = new Node(50);

    int n, data;
    cout << "Enter the number of nodes you want to add: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> data;
        head = insertAtBegin(head, data);
    }

    printlist(head);
    return 0;
}