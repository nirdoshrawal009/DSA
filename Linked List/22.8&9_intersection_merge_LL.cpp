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
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;
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

int intersection(node* &head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1; //for bigger length linked list
    node* ptr2; //for shorter length linked list

    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL)//No intersection in this case
        {
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

void intersect(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    pos--;

    while(pos--){
        temp1=temp1->next;
    }

    node* temp2 =head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    /*
    insertAtTail(head1,1);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,7);
    insertAtTail(head2,2);
    insertAtTail(head2,3);
    insertAtTail(head2,6);
    //intersect(head1,head2,4);
    */
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for(int i=0; i<4; i++){
        insertAtTail(head1, arr1[i]);
    }
    for(int i=0; i<3; i++){
        insertAtTail(head2, arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead=merge(head1,head2);
    //cout<<intersection(head1,head2)<<endl;
    display(newhead);
    return 0;
}