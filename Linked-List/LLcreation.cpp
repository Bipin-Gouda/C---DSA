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
    display(head);

}