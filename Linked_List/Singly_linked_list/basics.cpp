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
        int i=1;
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
    insertAtPosition(head,20,1);
    printLinkedList(head);

    cout<<endl<<"Size of the linked list: "<<linkedListSize(head);


}