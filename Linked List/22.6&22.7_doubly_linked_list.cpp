#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node* prev;
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
 
void insertAtHead(node* &head, int val) {
 
    node* n = new node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }
 
    head = n;
}
 
void insertAtTail(node* &head, int val) {
 
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
 
    node* n = new node(val);
    node* temp = head;
 
    while (temp->next != NULL) {
        temp = temp->next;
    }
 
    temp->next = n;
    n->prev = temp;
    //n->next=NULL; no need of this because our next is pointing already on NULL
 
}
 
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
/*
void deletion(node* &head, int pos){
    node* temp=head;
    while(temp->next->data!=pos){
        temp=temp->next;
    }
    node* to_delete=temp->next;
    temp->next=temp->next->next;
    temp->next->next->prev=temp;
    delete  to_delete;
}

void deleteAtHead(node* &head){
    node* temp=head->next;
    temp->prev=NULL;
    delete head;
    head=temp;
}
*/
void deleteAtHead(node* &head){
    node* todlelete=head;
    head=head->next;
    head->prev=NULL;
    
    delete todlelete;
}

void deletion(node* &head, int pos){
    node* temp=head;
    int count=1;
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;
    if(temp->next=NULL){
        temp->next->prev=temp->prev;
    }
    delete temp;
}
int length(node* &head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
/*
//self-tried solution
void kappend(node* &head, int k){
    int l=length(head);
    l=l-k;
    node* temp=head;
    int count=1;
    while(count<l){
        temp=temp->next;
        count++;
    }
    node* newhead=temp->next;
    temp->next=NULL;
    node* temp2=newhead;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=head;
    head=newhead;
}
*/
void kappend(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    head=newHead;
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
    display(head);
    //insertAtHead(head,5);
    //deletion(head,1);
    kappend(head,3);
    display(head);
    return 0;
}