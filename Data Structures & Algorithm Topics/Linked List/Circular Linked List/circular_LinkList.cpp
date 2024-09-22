#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void LinkedList_Traversal( struct Node *head )
{
    struct Node* ptr = head;

    do{
        cout << ptr->data << " ";
        ptr = ptr->next;
    }while( ptr != head );
}

struct Node* Insert_at_First( struct Node *head , int data )
{
    struct Node* ptr = new Node();
    ptr->data = data;

    struct Node* p = head->next;

    while( p->next != head )
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
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

    // Link Third and Fourth Node
    third->data = 5;
    third->next = fourth;

    // Link Fourth and First Node
    fourth->data = 10;
    fourth->next = head;


    cout << "Linked List Before Insertion at First" << endl;
    LinkedList_Traversal(head);
    head = Insert_at_First( head , 80 );
    cout << endl;
    cout << "Linked List After Insertion at First" << endl;
    LinkedList_Traversal(head);

    return 0;
}