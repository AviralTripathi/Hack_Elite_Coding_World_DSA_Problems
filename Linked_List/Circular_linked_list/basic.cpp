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
    printLinkedList(head);
}