#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node* Delete_Given_Value( struct Node* head , int value )
{
    struct Node* p = head;
    struct Node* q = head->next;
    while( q->data != value && q->next )
    {
        p = p->next;
        q = q->next;
    }

    if( q->data == value)
    {
        p->next = q->next;
        free( q );
    }

    return head;
}

void LinkedList_Traversal( struct Node *ptr )
{
    while( ptr!= NULL )
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    

    // Allocate memory for nodes in the linked list
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // Link First and Second Node
    head->data = 7;
    head->next = second;

    // Link Second and Third Node
    second->data = 1;
    second->next = third;

    // Link Third and fourth Node
    third->data = 5;
    third->next = fourth;

    // Terminate the list at the Fourth node
    fourth->data = 10;
    fourth->next = NULL;

    cout << "Linked List Before Deletion" << endl;
    // Print the LinkedList
    LinkedList_Traversal( head );

    head = Delete_Given_Value( head , 5 );
    cout << "Linked List After Deletion" << endl;
    LinkedList_Traversal( head );

    return 0;
}