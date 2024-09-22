#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node* Delete_The_Last_Node( struct Node* head )
{
    struct Node* p = head;
    struct Node* q = head->next;

    while( q->next != NULL )
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

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

    head = Delete_The_Last_Node( head );
    cout << "Linked List After Deletion" << endl;
    LinkedList_Traversal( head );

    return 0;
}