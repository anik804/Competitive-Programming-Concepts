#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

};

struct Node* Insert_At_End( struct Node* head , int data )
{
    struct Node* ptr = new Node;
    struct Node* p = head;

    ptr->data = data;

    while ( p->next != NULL )
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    
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

    // Allocate memory for nodes in the linked list
    head = new Node;
    second = new Node;
    third = new Node;

    // Link First and Second Node
    head->data = 7;
    head->next = second;

    // Link Second and Third Node
    second->data = 1;
    second->next = third;

    // Terminate the list at the third node
    third->data = 5;
    third->next = NULL;


    // Print the LinkedList
    cout << "Linked List before insertion" << endl;
    LinkedList_Traversal(head);

    head = Insert_At_End( head , 20 );
    cout << "Linked List after insertion" << endl;
    LinkedList_Traversal(head);
    
    return 0;
}