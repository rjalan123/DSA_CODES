#include<iostream>
#define n 100
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
  Stack(){
    arr=new int[n];
    top=-1;
  }
void push(int x){
    if(top==n-1){
        cout<<"stack full";
    }
    top++;
    arr[top]=x;
}

void pop(){
    if(top==-1){
        cout<<"empty stack";
    }
    top--;
}

int Top(){
    if(top==-1){
        cout<<"stack is empty";
    }
  return arr[top];
}
bool empty(){
    return (top==-1);
}
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
      cout<<s.Top()<<endl;
    return 0;
}