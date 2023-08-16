#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* previous;
    node* next;
    
    // default constructor for initialization

    node(int data)
    {
        this->data=data;
        previous=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* newNode=new node(val);
    if(head==NULL)
    {
        head=newNode;
        return;

    }
    newNode->next=head;
    head->previous=newNode;
    head=newNode;

}

void insertAtTail(node* &head,int val)
{
    node* newNode=new node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newNode->previous=temp->next;
    temp->next=newNode;
}

// to return the size of the doubly linked list

int linkedListSize(node* &head)
{
    node* temp=head;
    int size=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    return size;
}

void insertAtPosition(node* &head,int val,int position)
{
    node * newNode=new node(val);
    if(position==0)
    {
        insertAtHead(head,val);
        return;
    }
    else if(position==linkedListSize(head))
    {
        insertAtTail(head,val);
        return;
    }
    else{
        node* temp=head;
        int i=0;
        while(i<position-1 && temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        newNode->previous=temp->next;
        temp->next=newNode;
        newNode->next=temp->next->previous;
    }

}

// fuction to delete node at head

void deleteAtHead(node* &head)
{
    if(head==NULL)
    return;
    node* todelete=head;
    head=head->next;
    head->next->previous=NULL;
    delete todelete;
}

void deleteAtTail(node* &head)
{
    if(head==NULL)
    return;
    else if(head->next==NULL)
    {
        deleteAtHead(head);
    }
    else
    {
        node* temp=head;
        // dummy node to keep the track of the previous node while traversing.
        node* previous;
        while(temp->next!=NULL)
        {
            previous=temp;
            temp=temp->next;
        }
        node* todelete=temp;
        previous->next=NULL;
        delete todelete;
    }
}

void deleteAtPosition(node* &head,int position)
{
    if(position==0)
    {
        deleteAtHead(head);
    }
    else if(position==linkedListSize(head)-1)
    {
        deleteAtTail(head);
    }
    else
    {
        node* temp=head;
        int i=0;
        while(i<position-1 && temp!=NULL)
        {
            i++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->next->previous=temp;
    }
}

void printLinkedList(node* &head)
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
insertAtHead(head,29);
insertAtHead(head,34);
insertAtTail(head,42);
insertAtPosition(head,49,2);
insertAtTail(head,50);
insertAtTail(head,70);
printLinkedList(head);
cout<<endl<<"Size of the linked list: "<<linkedListSize(head)<<endl;
// deleteAtHead(head);
// deleteAtTail(head);
deleteAtPosition(head,2);
printLinkedList(head);
cout<<endl<<"Size of the linked list: "<<linkedListSize(head)<<endl;
}