#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){      //constructor for any new node
        data=val;
        next=NULL;
    }
};

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

void deletion(node* &head, int val){  // deleting a node whose val is given
    node* temp=head;
    if (temp->data==val){    // head to delete
        node* todelete=temp;
        head=temp->next;
        return;      // head has been updated as pass by ref
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
    display(head);
    deletion(head,1);
    display(head);
    deletion(head,29);
    display(head);
}