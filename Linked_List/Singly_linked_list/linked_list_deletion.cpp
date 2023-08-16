#include<bits/stdc++.h>
using namespace std;

// creating node class
class node{
    public:
    int  data;
    node* next;
    // creating constructor

    node(int val)
    {
        data=val;
        next=NULL;
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
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // doing this to get the last pointer of the exisiting last node to newNode.

    temp->next=newNode;
}

// function to calculate the size of the linked list.

int linkedListSize(node* &head)
{
    node* temp=head;
    int size=0;
    while(temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    return size;
}

// to insert a node at a particular value.

void insertAtPosition(node* &head,int val,int position)
{
    node* newNode=new node(val);
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
    else if(position>linkedListSize(head))
    cout<<endl<<"Invalid Position";
    else{
        int i=0;
        node* temp=head;
        while(i<position-1 && temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    }
}


void deleteAtHead(node* &head)
{
    if(head==NULL)
    return;
    if(head->next==NULL)
    {
        head=NULL;
        return;
    }
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void deleteAtTail(node* &head)
{
if(head==NULL)
return;
if(head->next==NULL)
{
    deleteAtHead(head);
    return;
}
node* temp=head;
// created dummy node to store the previous node while traversing.
node* previous;
while(temp->next!=NULL)
{
    previous=temp;
    temp=temp->next;
}
node* toDelete=temp;
previous->next=NULL;

delete toDelete;
}

// function to delete a node from the middle of the linked list.

void deleteAtPosition(node* &head,int position)
{
if(position==0)
{
    deleteAtHead(head);
    return;
}
else if(position==linkedListSize(head)-1)
{
    deleteAtTail(head);
    return;
}
node* temp=head;
int i=0;
// previous is a dummy node to keep the track of the previous node while traversing.

while(i<position-1 && temp->next!=NULL)
{
temp=temp->next;
i++;
}
node* toDelete=temp->next;
temp->next=temp->next->next;
delete toDelete;
}

// function to delete a particular node by value.

void deleteByValue(node* &head,int val)
{
    node* toDelete;
    if(head->data==val)
    {
        toDelete=head;
        head=head->next;
        
    }
    node* temp=head;
    // dummy node to get the previous node before the given node with value val.
    node* previous;
    while(temp->data!=val)
    {
        previous=temp;
        temp=temp->next;
    }
    toDelete=temp;
    previous->next=temp->next;
    delete toDelete;
    
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
    // Node* newNode=new  Node(23);
    
    // cout<<newNode->data<<endl;
    // cout<<newNode->next<<endl;

    node* head=NULL;
    insertAtHead(head,23);
    insertAtTail(head,34);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtPosition(head,20,1);
    insertAtPosition(head,60,3);
    printLinkedList(head);

    cout<<endl<<"Size of the linked list: "<<linkedListSize(head)<<endl;

    // deleteAtHead(head);

    // deleteAtTail(head);

    // deleteAtPosition(head,3);

    deleteByValue(head,60);


    printLinkedList(head);

    cout<<endl<<"Size of the linked list: "<<linkedListSize(head);


}