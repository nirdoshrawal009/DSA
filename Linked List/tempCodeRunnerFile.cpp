#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};


Node * create(int A[], int n)
{

    int i;
    struct Node *t, *l, *first;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    l = first;

    for (i = 1; i < n; i++)
    {

        t = new Node;
        t->data = A[i];
        t->next = NULL;

        l->next = t;
        l = t;
    }

    return first;
}

void Display(Node *head)
{
    Node *t;
    t = head;

    while (t)
    {

        cout << t->data << "   ";
        t = t->next;
    }
}

void question(Node* & head){
    Node* odd = head;
    Node* even  = odd->next;
    Node* evenStart = even;

    while(odd->next!=NULL && even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next= odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    // if(odd->next!=NULL){
    //     even->next = NULL;
    // }

}

int main(){

    int A[6] = {1,2,3,4,5,6};

    Node* head = create(A, 6);

    Display(head);

    cout<<endl;

    question(head);

    Display(head);




    return 0;
}