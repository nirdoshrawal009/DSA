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


bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

void makecycle(node* &head, int pos){
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next=startNode;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    /*
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            fast=head;
            break;
        }
    }
    */ 
   // above function by do while loop to remove but above was to make cycle to simple LL
   do {
    slow=slow->next;
    fast=fast->next->next;
   }while(slow!=fast);

    while(fast->next!=slow->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
//reverse linked list Iterative method

node* reverse(node* &head){ //It will return head of the linked list
     
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        //visualise these lineswith animation how pointers connection is changing
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr; // returns the head of the list
}

//recursive way of reversing a list
node* reverseRecursive(node* &head){

    if (head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
//reverse k-nodes of a linked list
node* reversek(node* &head, int k){
   node* prevptr=NULL;
   node* currptr=head;
   node* nextptr;

   int count = 0;
   while(currptr!=NULL and count<k){ // first k-nodes will be reversed by recursively
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
   }
   if(nextptr!=NULL){
   head->next = reversek(nextptr,  k);
   }
   return prevptr;
}


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
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    //display(head);
    //insertAtHead(head,4);
    //deletion(head,2);
    //deleteAtHead(head);
    makecycle(head,3);
    cout<<detectCycle(head)<<endl;;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;;
    display(head);
    //display(head);
    return 0;
}


