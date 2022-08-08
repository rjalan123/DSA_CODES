#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAttail(node* &head,int val){
    node* n=new node(val);
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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void inserAthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
   temp=temp->next;
    }
     return false;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nxtptr;

    while(currptr!=NULL){
        nxtptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nxtptr;
    }
    return prevptr;
}

int main(){
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    display(head);
    inserAthead(head,7);
    display(head);
    cout<<search(head,7)<<endl;
    node* newhead=reverse(head);
    display(newhead);


    return 0;
}