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
    
}