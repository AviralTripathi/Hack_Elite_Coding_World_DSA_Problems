#include<bits/stdc++.h>
using namespace std;

//creating a node class

class node{
    public:

    int data;
    node* next;

    // constructor

    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* newNode=new node(val);
    if(head==NULL)
    {
    head=newNode;
    newNode->next=head;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    newNode->next=head;
    head=newNode;
    temp->next=newNode;
}

void insertAtTail(node* &head,int val)
{
    node* newNode=new node(val);
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}

void deleteAtTail(node* &head)
{
    node* temp=head;
    node* previous;
    while(temp->next!=head)
    {
        previous=temp;
        temp=temp->next;
    }
    node* todelete=temp;
    previous->next=head;
    delete todelete;
}

void deleteAtHead(node* &head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    head=head->next;
    temp->next=head;
    delete todelete;
    
}

int linkedListSize(node* &head)
{
    node* temp=head;
    int size=0;
    do
    {
        temp=temp->next;
        size++;
    } while (temp!=head);
    return size;
}

void printLinkedList(node* &head)
{
    node* temp=head;
    do
    {
      cout<<temp->data<<"->";
      temp=temp->next;  
    } while (temp!=head);
    cout<<"NULL";
    
}

int main()
{
    node* head=NULL;
    insertAtHead(head,29);
    insertAtHead(head,49);
    insertAtTail(head,60);
    insertAtTail(head,80);
    insertAtTail(head,90);
    insertAtTail(head,100);
    printLinkedList(head);
    cout<<endl<<"Size of the linked list: "<<linkedListSize(head);
    cout<<endl;
    deleteAtTail(head);
    printLinkedList(head);
    cout<<endl<<"Size of the linked list: "<<linkedListSize(head);
    deleteAtHead(head);
    cout<<endl;
    printLinkedList(head);
    cout<<endl<<"Size of the linked list: "<<linkedListSize(head);
}