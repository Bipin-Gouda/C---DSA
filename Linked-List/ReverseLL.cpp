#include <iostream>
using namespace std;

//middle element finding in LL

class node{
    public:
    int data;
    node* next;

    node(int val){      //constructor for any new node
        data=val;
        next=NULL;
    }
};


void revLL(node* &head){
    node*X=head,*Y,*Z=NULL;
    while(X!=NULL){
        Y=X->next;
        X->next=Z;
        Z=X;
        X=Y;
    }
    head=Z;

}


void insertAtEnd(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){  //by value head passed so even if head used instd of temp ok
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,6);
    insertAtEnd(head,29);
    insertAtEnd(head,13);
    insertAtEnd(head,12);
    display(head);
    revLL(head);
    display(head);
}