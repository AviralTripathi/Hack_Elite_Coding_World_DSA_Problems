#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;


// using a constructor to implement a node.

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
node* node1=new  node(val);
if(head==NULL)
{
    head=node1;
    return;
}
// node1's next was pointing to null and doing this we have pointed node1's next to head.
// since head is the start of the linked list so we have head =node1.
node1->next=head;
head=node1;
}


void insertAtTail(node* &head,int val)
{
    node* newNode=new node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);
    }
    else {
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // doing this to get the last pointer of the exisiting last node to newNode.

    temp->next=newNode;
    }
}

// iterative method to reverse a linked list.

node* reverse(node* &head)
{
    node* temp=head;
    node* previous=NULL;
    node* forward;
    while(temp!=NULL){
        forward=temp->next;
        temp->next=previous;
        previous=temp;
        temp=forward;
    }
    // this is new head of the reversed linked list.
    return previous;
}

void printLinkedList(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}


int main()
{
node* head=NULL;
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
insertAtTail(head,50);
insertAtTail(head,60);
insertAtTail(head,70);
insertAtTail(head,80);
printLinkedList(head);
cout<<endl<<"Reverse of a linked list: "<<endl;
node* newHead=reverse(head);
printLinkedList(newHead);
}