#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    
}

void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp=head;
    }
}
int main(){
    Node* node1=new Node(1);
    Node* head=node1;
    Node* tail=node1;
 
   InsertAtHead(head,12);
   InsertAtHead(head,13);
   insertAtTail(tail,2);
   insertAtTail(tail,7);
   insertAtPosition(tail,head,2,22);
 
  print(head);
  
  
   
  return 0;
}