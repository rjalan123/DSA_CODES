#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;


    }

};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void insertAthead(Node* &head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
    }
   else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
   }
}


void insertAtTail(Node* & tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtposition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
       insertAthead(head,d);
       return;
    }
    int count=1;
    Node* temp=head;
    while(count<position-1){
      temp=temp->next;
      count++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}


int main(){
    Node* node1=new Node(2);
    Node* head=node1;
    Node* tail=node1;
   insertAthead(head,4);

   insertAthead(head,5);
   insertAtTail(tail,8);
 print(head);
   insertAtposition(head,tail,2,22);
   print(head);
}