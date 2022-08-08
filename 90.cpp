#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int d){
    this->data=d;
    this->next=NULL;
    }
};

void reversenode(Node* &head){
    Node* prev=NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        prev=temp;
    }
    temp=head;
    temp->next=prev;
    prev->next=prev;
}

void print(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<end;
        temp=temp->next;
    }
}

int main(){
    Node* node1=new Node(10);
    Node* node2=new Node(11);
    Node* node3=new Node(12);
  cout<<node1->data<<"";

}