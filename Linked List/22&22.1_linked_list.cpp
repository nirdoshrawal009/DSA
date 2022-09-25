#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next; // pointer which is pointing to node

    node(int val){  //constructor
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;


    if(head == NULL){
        head = n;
        return;
    }
}

void insertAtTail(node* &head, int val){
    node* n = new node(val); // new node n of value val which is needs to be inserted at the end
 
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;  // pointer to traverse our linked list from starting
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next=n;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void display(node* head){
    node* temp = head; //starting pointer for traversal
    while (temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head){
    node* to_delete = head;
    head = head->next;
    delete to_delete;
}

void deletion(node* &head, int val) // not valid for deleting head element
{
    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;

    while(temp->next->data!=val){ // we are finding previous node of which we want to delete
        temp = temp->next;
    }
    node* to_delete = temp->next;
    temp->next = temp->next->next;
    delete to_delete;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    //display(head);
    //insertAtHead(head,4);
    //deletion(head,2);
    deleteAtHead(head);
    display(head);
    //cout<<search(head,3)<<endl;
    return 0;
}

